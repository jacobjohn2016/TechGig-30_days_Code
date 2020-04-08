#include <iostream>

using namespace std;

int power(int a, int n, int p){
    int res = 1;
    a = a%p;
    
    while(n>0){
        // If n is odd, multiply 'a' with result 
        if (n & 1) 
            res = (res*a) % p; 
  
        // n must be even now 
        n = n>>1; // n = n/2 
        a = (a*a) % p; 
    } 
    return res; 
}

int gcd(int a, int b){
    if(a < b)
        return gcd(b, a);
    else if(a%b == 0)
        return b;
    else
        return gcd(b, a%b);
}

bool isPrime(int n, int k){
    // Corner cases 
    if (n <= 1 || n == 4)  return false; 
    if (n <= 3) return true;

    //try k times
    while(k > 0){
        // Pick a random number in [2..n-2]         
        // Above corner cases make sure that n > 4 
        int a = 2 + rand()%(n-4);

        // Checking if a and n are co-prime 
        if (gcd(n, a) != 1) 
            return false;
        
        // Fermat's little theorem 
        if (power(a, n-1, n) != 1) 
            return false;
        
        k--;
    }

    return true;
}

int main()
{
    int a, b, num_primes = 0, k = 3;
    cin >> a >> b;
    for(a++; a < b; a++){
        if(isPrime(a, k))
            num_primes++;
    }
    cout << num_primes;
}

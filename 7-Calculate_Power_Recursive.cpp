/* Program to calculate power using recursion*/
#include <iostream>

using namespace std;

int power(int x, int n){
    int y;
    if(n == 0)          // base case
        return 1;
    else if(n%2 == 0){  // n is even
        y = power(x, n/2);
        return  y * y;
    }
    else{               // n is odd
        y = power(x, (n-1)/2);
        return x * y * y;
    }
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << power(x, n);
}
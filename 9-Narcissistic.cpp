#include <iostream>

using namespace std;

int power(int x, int n){
    int y;
    if(n == 0)
        return 1;
    else if(n%2 == 0){
        y = power(x, n/2);
        return y * y;
    }
    else{
        y = power(x, (n-1)/2);
        return x * y * y;
    }
}


int order(int num){
    int n = 0;

    while(num > 0){
        n++;
        num = num/10;
    }

    return n;
}

bool isNarcissistic(int num){
    int n = order(num);
    int i = num;
    int sum = 0;

    while(num > 0){
        sum += power(num%10,n);
        num = num/10;
    }

    return sum == i;
}

int main(){
    int num;

    cin >> num;
    isNarcissistic(num)? cout << "True": cout << "False";
}
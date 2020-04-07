#include <iostream>

using namespace std;

int main(){
    
    int num, i = 0;

    cin >> num;

    while(num > 0){
        num = num/10;
        i++;
    }

    cout << i;
}
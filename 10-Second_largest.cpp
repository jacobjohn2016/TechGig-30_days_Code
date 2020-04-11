#include <iostream>

using namespace std;

int main(){
    int n, i, first, second;

    cin >> n;
    int* arr = new int[n];

    for(i = 0; i < n; i++)
        cin >> arr[i];

    first = second = INT_MIN;
    for(i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < first & arr[i] > second)
            second = arr[i];
    }

    cout << second;
}
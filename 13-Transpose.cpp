#include <iostream>

using namespace std;

int main(){
    int n, m, i, j;
    
    cin >> n >> m;
    int** a = new int*[n];
    for(i = 0; i < m; i++)
        a[i] = new int[m];

    // input array
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];

    // output transpose by reversing row and columns
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
        j != n-1? cout << a[j][i]<< " ": cout << a[j][i];
        if(i != m-1)
            cout << endl;
    }
}
#include <iostream>

using namespace std;

int main(){
    int n, m, p, q, i, j;
    
    cin >> n >> m;
    int** a = new int*[n];
    for(i = 0; i < m; i++)
        a[i] = new int[m];

    // input array
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];

    cin >> p >> q;
    int** b = new int*[p];
    for(i = 0; i < q; i++)
        b[i] = new int[q];

    // input array
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            cin >> b[i][j];

    // matrix addition
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++)
            j != m-1? cout << a[i][j] + b[i][j] << " ": cout << a[i][j] + b[i][j];
        if(i != n-1)
            cout << endl;
    }
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    int i, upper = 0, lower = 0;
    string in;

    getline(cin, in);

    for(i = 0; i < in.length(); i++){
        if(in[i] >= 'a' & in[i] <= 'z')
            lower++;
        else if(in[i] >= 'A' & in[i] <= 'Z')
            upper++;
    }

    cout << upper << endl << lower;
}
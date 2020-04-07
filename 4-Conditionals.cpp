#include <iostream>

using namespace std;

int main()
{
	int age;

    cin >> age;

    if(age < 10)
        cout << "I am happy as having no responsibilities.";
    else if (age >= 10 & age < 18)
        cout << "I am still happy but starts feeling pressure of life.";
    else
        cout << "I am very much happy as i handled the pressure very well.";
}

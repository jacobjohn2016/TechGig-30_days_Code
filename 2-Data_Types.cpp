#include <iostream>
#include <cmath>

using namespace std;

int main() 
{ 
    const int n = 100;
    char in[n] = ""; // input
	double num_val;
	long int integral_val; 
	char str[n] = "";

	fgets(in, 100, stdin);

	// Check for integer or float
	if (sscanf(in, "%lf", &num_val) == 1) 
	{ 
		integral_val = (long int)num_val;
		if (fabs(num_val - integral_val) != 0) // Check if floating point exits
			cout << "This input is of type Float.";	 
		else
			cout << "This input is of type Integer.";		 
	} 
	// Check for string 
	else if (sscanf(in, "%s", str) == 1)	 
		cout << "This input is of type string."; 
	else
		cout << "This is something else.";	 
} 
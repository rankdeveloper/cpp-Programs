// C++ code to demonstrate
// the working of setw() function

#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

int main()
{

	// Initializing the integer
	char str[15]="Hello";

	cout << "Before setting the width: \n"
		<< str << endl;

	// Using setw()
	cout << "Setting the width"<< " using setw to 10: \n"<< setw(10);
	cout << str << endl;

	return 0;
}

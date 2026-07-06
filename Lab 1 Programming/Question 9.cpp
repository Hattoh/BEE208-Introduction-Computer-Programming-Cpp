#include <iostream>
using namespace std;

/* Using ternary operator to determine the larger of two integers. */

int main() {
	int num1, num2, larger;
	
	
	cout << " Enter the first integer: ";
	cin >> num1;
	
	cout << " Enter the second integer: ";
	cin >> num2;
	
	larger = (num1 > num2) ? num1 : num2;
	
	cout << "The larger number is: " << larger << endl;
	
	
	return 0;
}

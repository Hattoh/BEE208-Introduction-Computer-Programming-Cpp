#include <iostream>
using namespace std;

/* Using the conditional operator to determine the larger of two floating numbers. */

int main() {
	float num1, num2, larger;
	
	cout <<" Enter the first floatng-point number: ";
	cin >> num1;
	
	
	cout << " Enter the second floating-point number: ";
	cin >> num2;
	
	larger = (num1 > num2) ? num1 : num2;
	
	cout << " The larger number is: " << larger << endl;
	
	
	
	
	return 0;
}

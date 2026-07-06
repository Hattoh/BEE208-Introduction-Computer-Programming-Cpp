#include <iostream>
using namespace std;

/* Writing a code using the XOR operator to swap two variables. */

int main() {
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	
	cout << "Enter the second number: ";
	cin >> b;
	
	cout << " Before swapping:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	cout << " After swapping:" << endl;
	cout << "a = " << a <<", b = " << b << endl;
	
	
	
		return 0;
}

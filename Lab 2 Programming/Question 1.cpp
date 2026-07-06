#include <iostream>
using namespace std;

/* A code that accepts the power factor of an electrical load.*/

int main() {
	double powerfactor;
	
	cout < " Enter the power factor: ";
	cin >> powerfactor;
	
	if (powerfactor < 0 || powerfactor > 1) {
		cout << " Invalid power factor" << endl;
	}
	else if (powerfactor >= 0.00 && powerfactor <= 0.50) {
		cout << " Poor power factor" << endl;
	}
	else if (powerfactor >= 0.51 && powerfactor <= 0.80) {
		cout << "Fair power factor" << endl;
	}
	else if (powerfactor >= 0.81 && powerfactor <= 0.95) {
		cout << " Good power factor" << endl;
	}
	else { // 0.90 to 1.000
	cout << "Excellent power factor" << endl;
	}
	
	return 0;
}

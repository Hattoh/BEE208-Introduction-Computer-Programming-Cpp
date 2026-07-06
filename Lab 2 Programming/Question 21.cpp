#include <iostream>
using namespace std;

/* A code that accepts a voltage reading and classifis them. */

int main( ) {
	double voltage;
	
	// Accepts voltage input
	cout << " Enter voltage reading (V): ";
	cin >> voltage;
	
	// Classify voltage
	if (voltage < 0) {
		cout << " Voltage: " << voltage << " V - Invalid voltage reading" << endl;
	}
	else if (voltage <= 50) {
		cout << " Voltage: " << voltage << " V - Low voltage." << endl;
	}
	else if (voltage <= 240) {
		cout << " Voltage: " << voltage << " V - Normal voltage" << endl;
	}
	else if (voltage <= 415){
		cout << " Voltage: " << voltage  << " V- High voltage" << endl;
	}
	else {
		cout << " Voltage: " << voltage << " V- Dangerous voltage" << endl;
	}
	return 0;
}

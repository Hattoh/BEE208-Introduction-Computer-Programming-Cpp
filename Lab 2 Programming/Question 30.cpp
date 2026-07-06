#include <iostream>
using namespace std;

/* A code that repeadly accepts battery voltage readings.*/

int main() {
	double voltage;
	
	// Accept first voltage reading 
	cout << " Enter battery voltage (V): ";
	cin >> voltage;
	
	// Continue while voltage is 12 V or above
	while (voltage >= 12)
	{
		cout << " Battery voltage is normal: " << voltage << " V" << endl;
		
		cout << " Enter battery voltage (V): ";
		cin >> voltage;
		
	}
	
	// Voltage below 12 V
	cout << " Battery voltage low. Recharge equired." << endl;
	
	
	
	return 0;
}

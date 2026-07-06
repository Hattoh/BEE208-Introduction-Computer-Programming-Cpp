#include <iostream>
using namespace std;

/*A code which records 10 voltage readings from a sensor. */

int main() {
	double voltage, totalVoltage = 0, averageVoltage;
	
	//Accept 10 voltage readings
	for (int i = 1; i <= 10; i++)
	{
		cout << " Enter voltage reading " << i << " (V): ";
		cin >> voltage;
		
		totalVoltage += voltage;
	}
	
	// Calculate average voltage
	averageVoltage = totalVoltage / 10 ;
	
	//Display result
	cout << "\nTotal Voltage =" << totalVoltage << " V" << endl;
	cout << " Average Voltage =" << averageVoltage << " V" << endl;
	
	
	return 0;
}

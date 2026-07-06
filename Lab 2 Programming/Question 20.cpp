#include <iostream>
using namespace std;

/* A code that accepts 10 power readings from a monitoring system.*/

int main() {
	double powerReading, totalPower = 0;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << " Enter power reading " << i << " (W): ";
		cin >> powerReading;
		
		if (powerReading < 0)
		{
			cout << "Invalid reading skipped." << endl;
			continue;
			
		}
		
		totalPower += powerReading;
	}
	
	cout << "\nTotal of valid power readings = "
	<< totalPower << " W" << endl;
	
	
	return 0;
}

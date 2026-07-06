#include <iostream>
using namespace std;

/*A code which accepts 12 sensor readings. */

int main() {
	double readings, sum = 0, average;
	int validCount = 0;
	
	for (int i = 1; i <= 12; i++)
	{
		cout << " Enter sensor reading " << i << ": ";
		cin >> readings;
		
		if (readings == 999)
		{
			cout << " Faulty sensor value detected. Reading skipped." << endl;
			continue;
			
		}
		
		sum += readings;
		validCount++;
		
	}
	
	if (validCount > 0)
	{
		average = sum / validCount;
		cout << "\nAverage of valid readings = " << average << endl;
		
	}
	else
	{
		cout << "\nNo valid readings entered." << endl;
	}
	
	
	return 0;
}

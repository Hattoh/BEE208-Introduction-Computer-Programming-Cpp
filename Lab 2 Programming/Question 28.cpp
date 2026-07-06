#include <iostream>
using namespace std;

/* A code which accepts 8 current reading and counts safe and unsafe readings. */

int main() {
	double current;
	int safeCount = 0, unsafeCount = 0;
	
	// Accept 8 current readings
	for (int i = 1; i <= 8; i++)
	{
		cout << " Enter current reading " << i << " (A): ";
		cin >> current;
		
		// Check if the reading is safe
		if (current <= 10)
		{
			safeCount++;
		}
		else
		{
			unsafeCount++;
		}
	}
	
	//Display results
	cout << "\nNumber of Safe Readings: " << safeCount << endl;
	cout << "Number of Unsafe Readings: " << unsafeCount << endl;
	
	
	return 0;
}

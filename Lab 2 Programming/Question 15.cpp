#include <iostream>
using namespace std;

/*A code which repeatedly allows for the calculation of resistance. */

int main() {
	double voltage, current, resistance;
	char choice;
	
	do{
		cout << " Enter Voltage (V): ";
		cin >> voltage;
		
		cout << " Enter the current (A): ";
		cin >> current;
		
		if (current != 0)
		{
			resistance = voltage / current;
			cout << " Resistance = " << resistance << "Ohms" << endl;
		}
		else
		{
			cout << " Current cannot be zeros!" << endl;
		}
		
		cout << " Do you want to continue? (Y/N): ";
		cin >> choice; 
		
	} while (choice == 'Y' || choice == 'y');
	
	cout << " Programs terminated." << endl;
	
	
	return 0;
}

#include <iostream>
using namespace std;

/* A code that displays a calculattion menu and performs rhe selected electrical calculation.*/

int main() {
	int choice;
	double voltage, current, power, time, resistance, energy;
	
	// Displays menu
	cout << " Electrical Calculation Menu" << endl;
	cout << "1. Calculate DC Power" << endl;
	cout << "2. Calculate Resistance using Ohm's Law" << endl;
	cout << "3. Calculate Energy Consumption" << endl;
	
	// Accept user choice
	cout << "\nEnter your choice (1-3): ";
	cin >> choice;
	
	// Preform calculation
	switch (choice)
	{
		case 1:
			cout << " Enter Voltage (V): ";
			cin >> voltage;
			cout << " Enter Current (A): ";
			cin >> current;
			
			power = voltage * current;
			cout << " DC Power =" << resistance << " W" << endl;
			break;
			
		case 2:
			cout << " Enter Voltage (V): ";
			cin >> voltage;
			cout << " Enter Current (A): ";
			cin >> current;
			
			resistance = voltage / current;
			cout << " Resistance =" << resistance << "Ohms" << endl;
			break;
			
		case 3:
		    cout << "Enter Power (W): ";
			cin >> power;
			cout << "Enter Time (H): ";
			cin >> time;
			
			energy = power * time;
			cout << " Energy Comsumption =" << energy << " Wh" << endl;
			break;
			
	   defualt:
	    cout << " Invalid selection." << endl;		
			
	}
	
	
	return 0;
} 

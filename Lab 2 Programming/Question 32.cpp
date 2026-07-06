#include <iostream>
using namespace std;

/* A programme which repeatedly displays an electrical calculator. */

int main() {
	int choice;
	double voltage, current, power, resistance, time, energy;
	
	do
	{
		cout << "\nElectrical Calculator Menu\n";
		cout << " 1. Calculate Power\n";
		cout << " 2. Calculate Resistance\n";
		cout << " 3. Calculate Energy\n";
		cout << " 4. Exit\n";
		cout << " Enter Your choice: ";
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				
				cout << " Enter Voltage: ";
				cin >> voltage;
				cout << " Enter Current: ";
				cin >> current;
				power = voltage * current;
				cout << " Power =" << power << " Watts\n";
				break;
				
			case 2:
			    cout << " Enter Voltage: ";
				cin >> voltage;
				cout << " Enter Current: ";
				cin >> current;	
				
				if (current == 0)
				{
					cout << " Current cannot be zero.\n";
				}
				else
				{
					resistance = voltage / current;
					cout << " Resistance = " << resistance << " Ohms\n";
				}
				break;
				
			case 3:
			    cout << " Enter Power: ";
				cin >> power;
				cout << " Enter time: ";
				cin >> time;
				energy = power * time;
				cout << " Energy = " << energy << "Wh\n";
				break;
				
			case 4:
			    cout << " Program terminated.\n";
				break;	
				
			default:
			    cout << " Invalid choice!\n";
						
		} 
	} while (choice != 4);
	
	return 0;
}

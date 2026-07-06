#include <iostream>
using namespace std;

/*A code which displays the a menu using the switch statement*/

int main() {
	int choice;
	double primaryTurns, secondaryTurns;
	double primaryVoltage, SecondaryVoltage;
	double turnsRatio;
	
	cout << " Transformer Calculation Menu" << endl;
	cout << " 1. Calculate Turns Ratio" << endl;
	cout << " 2. Calculate Secondary Voltage" << endl;
	cout << " 3. Calculate Primary Voltage" << endl;
	cin >> choice;
	
	switch (choice) {
		case 1:
			cout <<  " Enter Primary Turns: ";
			cin >> primaryTurns;
			cout << " Enter Secondary Turns: ";
			cin >> secondaryTurns;
			
			turnsRatio = primaryTurns / secondaryTurns;
			cout << " Turns Ratio =" << turnsRatio << endl;
			break;
			
		case 2: 
			cout << " Enter Primary Voltage: ";
			cin >> primaryVoltage;
			cout << "Enter Primary Turns: ";
			cin >> primaryTurns;
			cout << " Enter Secondary Turns: ";
			cin >> secondaryTurns;
			
			SecondaryVoltage = primaryVoltage * secondaryTurns / primaryTurns;
			cout << " Secondary Volatge = " << SecondaryVoltage << " V" << endl;
			break;

			
		case 3:
			cout << " Enter Secondary Voltage: ";
			cin >> secondaryTurns;
			cout << " Enter Primary Turns: ";
			cin >> primaryTurns;
			cout << " Enter Secondary Turns: ";
			cin >> secondaryTurns;
			
			primaryVoltage = SecondaryVoltage * primaryTurns / secondaryTurns;
			cout << " Primary Voatge = " << primaryVoltage << " V" << endl;
			break;
			
		default:
		cout << "Invalid choice!" << endl;	
			
			
	}
	return 0;
}

#include <iostream>
using namespace std;

/* A code which accepts the values of five resistors connected in series and calculates the total resistance.*/

int main() {
	double resistor,  totalResistance = 0;
	
	// Accept five resistor values
	for (int i = 1; i <= 5; i++)
	{
		cout << " Enter value of Resistor " << i << "(Ohms): ";
		cin >> resistor;
		
		totalResistance += resistor;
		
	}
	
	// Display total resistance
	cout << "\nTotal Resistance =" << totalResistance << " Ohms" << endl;
	
	
	return 0;
}

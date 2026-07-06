#include <iostream>
using namespace std;

/*A code that accepts the motor temperature readings. */

int main() {
	double temperature;
	
	cout << " Enter motor temperature: ";
	cin >> temperature;
	
	while (temperature <= 90)
	{
		
		cout << " Tmeperature is safe." << endl;
		
		cout << " Enter motor temperature: ";
		cin >> temperature;
	}
	
	cout << " Motor temperature unsafe. Stop motor test." << endl;
	
	
	
	
	return 0;
}

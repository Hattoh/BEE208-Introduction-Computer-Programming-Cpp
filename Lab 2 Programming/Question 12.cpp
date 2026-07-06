#include <iostream>
using namespace std;

/*A code which repeatedly accepts solsr panel voltage readings.*/

int main() {
	double voltage;
	
	cout << " Enter solar panel voltage: ";
	cin >> voltage;
	
	while (voltage >= 18);
	{
		cout << " Voltage is within opearting level." << endl;
		
		
		cout << " Enter solar panel voltage: ";
		cin >> voltage;
		
	}
	
	cout << " Solar panel voltage below operating level." << endl;
	
	
	return 0;
}

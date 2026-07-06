#include <iostream>
using namespace std;

/* A programme that continuously accepts current readings from the user.*/

int main() {
	double current;
	
	// Accept first current reading
	cout << " Enter current reading (A): ";
	cin >> current;
	
	// Continue while current is 10 A or below
	while (current <= 10)
	{
		cout << " Safe current reading: " << current << " A" << endl;
		
		cout << " Enter current reading (A): ";
		cin >> current;
		
	}
	
	//Overcurrent condition
	cout << " Overcurrent detected. Monitoring stopped." << endl;
	
	
	return 0;
}

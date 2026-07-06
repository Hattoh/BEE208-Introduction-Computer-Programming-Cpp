#include <iostream>
using namespace std;

/*A code that accepts the temperature of an electrical cable in degree celsius */

int main() {
	double temperature;
	
	cout <<" Enter the cables temperature in degrees Celsius: ";
	cin >> temperature;
	
	if (temperature > 70) {
		cout << "Cables overheating detected." << endl;
	}
	else {
		cout << " Cables temperature is within safe range." << endl;
	}
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

/*A code thta accepts the rated current of a circuit breaker and the measured current in a circuit.*/

int main() {
	double ratedCurrent, measuredCurrent;
	
	//Accept inputs
	cout << " Enter the rated current of the circuit breaker (A): ";
	cin >> ratedCurrent;
	
	cout << " Enter the measured current in the circuit (A): ";
	cin >> measuredCurrent;
	
	// Compared currnets
	if (measuredCurrent > ratedCurrent) {
		cout << " Overload detected. Circuit breaker should trip. " << endl;
	} else {
		cout << " Current is within safe limit." << endl;
		
	}
	
	
	return 0;
}

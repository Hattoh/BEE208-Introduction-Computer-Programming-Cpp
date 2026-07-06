#include <iostream>
using namespace std;

/*A code that repeatedly accepts earth resistance readings. */

int main() {
	double resistance;
	
	cout << " Enter earth resistance readings (Ohms): ";
	cin >> resistance;
	
	while (resistance <= 5)
	{
		 cout << " Resistance is within acceptable limit." << endl;
		 
		 cout << " Enter earth resistance reading (Ohms): ";
		 cin >> resistance;
		 
	}
	
	cout << " Earth resisance too high. Improve earthing system." << endl;
	
	
	
	return 0;
}

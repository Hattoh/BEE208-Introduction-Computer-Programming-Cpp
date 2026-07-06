#include <iostream>
using namespace std;

/* A code which accepts 6 sets of current readings from a three-phase system.*/

int main() {
	double line1, line2, line3, average;
	
	for (int i = 1; i <= 6; i++) {
		cout << " Enter currents for set " << i << endl;
		
		cout << " Line 1 current: ";
		cin >> line1;
		
		cout << " Line 2 current: ";
		cin >> line2;
		
		cout << " Line 3 current: ";
		cin >> line3;
		
		average = (line1 + line2 + line3) / 3;
		
		cout << " Average current for set " << i << " = " << average << " A" << endl;
		cout << "-----------------------" << endl;
	
	}
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

/*A code that accepts the wattage of 12 lighting points in a building and calculates the total lghting load.  */

int main() {
	double wattage, totalLoad = 0;
	
	for (int i = 1; i <= 12; i++) {
		cout <<" Enter wattage of the lighting point " << i << ": ";
		cin >> wattage;
		
		totalLoad = totalLoad += wattage;
	}
	
	cout << "\nTotal Lighting Load = " << totalLoad << " W" << endl;
	
	
	return 0;
}

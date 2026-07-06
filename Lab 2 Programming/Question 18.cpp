#include <iostream>
using namespace std;

/*A code that accepts up to 20 appliance power ratings. */

int main() {
	double powerRating, totalLoad = 0;
	
	for (int i = 1; i <= 20; i++)
	{
		cout << " Enter power rating of appliance " << i << " (W): ";
		cin >> powerRating;
		
		totalLoad += powerRating;
		
		if (totalLoad > 5000)
		{
			cout << "Maximum load exceeded. Stop adding appliances." << endl;
			break;
		}
		
	}
	
	cout << "Final Total Load = " << totalLoad << " W" << endl;
	
	
	 
	return 0;
}

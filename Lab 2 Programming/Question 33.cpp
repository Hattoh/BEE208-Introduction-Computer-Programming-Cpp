#include <iostream>
using namespace std;


/*A programme which accepts up to 10 battery voltage readings and stops immediately.*/

int main() {
	double voltage;
	
	for (int i = 1; i <= 10; i++ )
	{
		cout << " Energy battery voltage reading " << i << " :";
		cin >> voltage;
		
		if (voltage < 10.5)
		{
			cout << " Low battery detected. Test stopped." << endl;
			break;
		}
		else
		{
			cout << " Battery voltage normal." << endl;
		}
	}
	
	
	return 0;
}

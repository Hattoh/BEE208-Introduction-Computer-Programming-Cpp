#include <iostream>
using namespace std;

/* A code which accepts up to 10 insulation resistance readings.*/

int main() {
	double reading;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << " Enter insulation resistance reading " << i << " (in Mohms): ";
		cin >> reading;
		
		if (reading < 1)
		{
			cout << " Insulation failure detected. Test stopped." << endl;
			break;
		}
		else
		{
			cout << "Insulation reading acceptable." << endl;
		}
	}
	 cout << "Program ended." << endl;
	 
	
	return 0;
}

#include <iostream>
using namespace std;

/*A code   */

int main() {
	int result;
	int passed = 0;
	int failed = 0;
	
	for (int i = 1; i <= 15; i++)
	{
		cout << " Enter result for component " << i
		<< "(1 = Pass, 0= Fail): ";
		cin >> result;
		
		if (result == 1)
		{
			passed++;
		}
		else
		{
			failed++;
		}
	}
	cout << "\nNumber of Passed Component: " << passed << endl;
	cout << " Number of Failed Components: " << failed << endl;
	
	
 	return 0;
}

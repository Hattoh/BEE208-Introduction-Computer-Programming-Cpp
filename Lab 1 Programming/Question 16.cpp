#include <iostream>
using namespace std;


/*Using the AND operator to check whether the number is a power of 2. */

int main() {
	int num;
	
	cout << " Enter a number: ";
	cin >> num;
	
	
	if ( num > 0 && (num &( num -1)) == 0) {
		cout << "The number is a power of 2." << endl;
	} else {
		cout << "The number is not a power of 2." << endl;
		
		
	}
	return 0;
}

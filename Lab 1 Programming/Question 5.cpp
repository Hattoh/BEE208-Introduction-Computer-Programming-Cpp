#include <iostream>
#include <cctype>
using namespace std;

/* Writing a code by using the logical AND operator. */

int main() {
	char ch;
	
	cout << " Enter a character: ";
	cin >> ch;
	
	
	if (isupper(ch) && isalpha(ch)) {
		cout << "Uppercase letter" << endl;
	} else {
		cout << "Not an uppercase letter" << endl;
	}
	
	
	
	return 0;
}

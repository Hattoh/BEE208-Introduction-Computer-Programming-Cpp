#include <iostream>
using namespace std;


/* A programme that asks the user to enter a password before accessing an electrical control panel. */

int main() {
	int password;
	
	cout << " Enter password: ";
	cin >> password;
	
	while (password != 2080)
	{
		cout << " Incorrect password. Try again: ";
		cin >> password;
	}
	
	cout << " Access granted to control pa2020nel." << endl;
	
	
	return 0;
}

#include <iostream>
using namespace std;

/*Bitwise NOT(~) is used to invert every bit( 0 becomes 1, 1 becomes 0).*/
// Example: int x = 5;
//          cout << ~x;

/*Logical NOT(!) is used to reverse a Boolean condition( true becomes false,false becomes true)*/
//Example: bool x = true;
//         cout << !x;

int main() {
	int x = 5;
	bool y = true;
	
	cout << "Bitwise Not of " << x << " is " << ~x << endl;
	cout << " Logical Not of" << y << " is " << !y << endl;
	
	return 0;
}

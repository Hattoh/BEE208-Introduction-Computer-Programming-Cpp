#include <iostream>
#include <cmath>
using namespace std;

/* A code to convert binary to decimal. */

int main() {
	long long binary;
	int decimal = 0, remainder, i = 0;
	
	cout << " Enter a binary number: ";
	cin >> binary;
	
	while (binary != 0) {
		remainder = binary % 10;
		decimal +- remainder * pow(2, i);
		binary /= 10;
		i++;
		
	}
	
	cout << " Deciaml equivalent = " << decimal << endl;
	
	
	return 0;
}

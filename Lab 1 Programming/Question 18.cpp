#include <iostream>
#include <string>
using namespace std;

/*A code to convert binary to hexadecimal and from binary to octaldcimal. */

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
	int decimal = 0;
	int base = 1;
	
	for (int i = binary.length() - 1; i >= 0; i --) {
		if (binary[i] == '1')
		decimal += base;
		base *= 2;
	}
	
	return decimal;
}

int main() {
	string binary;
	int choice;
	
	cout << " ===== Binary Conversion Calculator =====" << endl;
	cout << "1. Binary to Decimal" << endl;
	cout << "2. Binary to Octal" << endl;
	cout << "3. Bnary to Hexadecimal" << endl;
	cout << " Enter your choice: ";
	cin >> choice;
	
	cout << " Enter a binary number: ";
	cin >> binary;
	
	int decimal = binaryToDecimal(binary);
	
	switch (choice) {
		case 1:
			cout << " Decimal = " << decimal << endl;
			break;
		
		case 2:
			cout << "Octal = " << oct << decimal << endl;
			break;
			
		case 3:
			cout << "Hexadecimal = " << hex << uppercase << decimal << endl;
			break;
			
	default:
		cout << " Invalid choice!" << endl;	
			
	}
	return 0;
}

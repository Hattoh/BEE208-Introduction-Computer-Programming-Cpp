#include <iostream>
#include <string>
using namespace std;

/*A code to print Hello.*/

int main() {
	string word;
	
	cout << " Enter a string: ";
	cin >> word;
	
	if(word == "hello") {
		cout << "Hello!" << endl;
	} else {
		cout << "Goodbye!" << endl;
	}
	
	
	
	return 0;
}

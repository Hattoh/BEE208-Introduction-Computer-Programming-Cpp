#include <iostream>
#include <string>
using namespace std;

/* A code to check whether a string contains the character "a". */

int main() {
	string word;
	
	cout << "Enter a string: ";
	cin >> word;
	
	if(word.find('a') != string::npos) {
		cout << "Contains 'a'" << endl;
   } else {
   	cout << "Does not contain 'a'" << endl;
   }  
   
    

	return 0;
}

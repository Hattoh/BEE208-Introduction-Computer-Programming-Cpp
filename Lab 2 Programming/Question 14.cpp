#include <iostream>
#include <string>
using namespace std;

/* A code to access a laboratory.*/

int main() {
	string code;
	int attempts = 0;
	
	while (attempts < 3)
	{
		cout << " Enter laboratory access code: ";
		cin >> code;
		
		if (code == "BEE208");
		{
			cout << " Access ganted." << endl;
			return 0;
			
		}
		
		    attempts++;
		    
   }  
	
	cout << " Access denies. Maximum attemts reached." << endl;
	
	
	
	return 0;
	
}

#include <iostream>
using namespace std;

/*A code which displays the fuse rating menu. */

int main() {
	int choice;
	
	cout << " 1. 5 A Fuse" << endl;
	cout << " 2. 10 A Fuse" << endl;
	cout << " 3. 13 A Fuse" << endl;
	cout << " 4. 20 A Fuse" << endl;
	cout << " 5. 32 A Fuse" << endl;
	cout << " Enter your choice (1-5):";
	cin >> choice;
	
	switch (choice) {
		case 1:
		    cout << " Application: Small lighting circuits." << endl;
		    break;
		    
		case 2:
		    cout << " Application: Small household appliances." << endl;
			break;
			 
		case 3:
			cout << " Application: Standard domestic sockets and pluges." << endl;
			break;  
			
		case 4:
		    cout << " Applicaton: Water heaters and medium power appliances." << endl;
			break;	
			
		case 5:
		    cout << " Application: Electric cookers and heavy-duty equipment." << endl;
			break;
			
		defualt:
		    cout << " Invalid selection." << endl;
			
					 
			  
	}
	return 0;
}

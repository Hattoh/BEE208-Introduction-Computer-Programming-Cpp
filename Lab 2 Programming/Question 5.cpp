#include <iostream>
using namespace std;

/*A code which displays a menu to perform measurement unit conversion.*/

int main() {
	int choice;
	double value, result;
	
	cout << " Measurement Unit Conversion Menu." << endl;;
	cout << " 1. Convert volts in millivolts" << endl;
	cout << " 2. Convert amperes to milliamperees" << endl;
	cout << " 3. Convets kilowatts to watts" << endl;
	cout << " 4. Convert ohms to kilo-ohms" << endl;
	cout << " Enter your choice (1-4): ";
	cin >> choice;
	
	cout << " Enter the value to converts: ";
	cin >> value;;
	
	switch (choice) {
		case 1:
			result = value * 1000;
			cout << value << " V = " << result << " mV " << endl;
			break;
			
		case 2:
		    result = value * 1000;
			cout << value << " A = " << result << "mA" << endl;
			break;
			
		case 3:
	     	result = value * 1000;
		    cout << value << "kW = " << result << " W" << endl;
		    break;	
		
	    case 4:
	    	result = value *  1000;
	    	cout << value << " ohms = " << result << " kOhms" << endl;
	    	break;
	    	
	    default:
		cout << " Invalid choice!" << endl;	
	}
	
	return 0;
}

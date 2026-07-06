#include <iostream>
using namespace std;

/*A code accepts a student's GPA and determines scholarship eligibility.*/

int main() {
	double gpa;
	
	// Accept GPA input
	cout << " Enter your GPA: ";
	cin >> gpa;
	
	// Determine scholarship eligibility
	if (gpa >= 3.5)
	{
		cout << " Eligible for engineering scholarship." << endl;
	}
	else
	{ 
	    cout << " Not eligible for engineering scholarship." << endl;
	}
	
	
	return 0;
}

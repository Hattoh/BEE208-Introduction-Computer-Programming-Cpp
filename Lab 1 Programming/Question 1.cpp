#include <iostream>
#include <cmath>
using namespace std;

/* A code to calculate for the area of a circle. */

int main() {
	double radius, area;
	const double PI = 3.14159;
	
	cout << " 	Enter the radius of the circle: ";
	cin >> radius;
	
	area = PI  * pow(radius, 2);
	
	cout << " The area of the circle is: " << area << endl;
	
	
	return 0;
}

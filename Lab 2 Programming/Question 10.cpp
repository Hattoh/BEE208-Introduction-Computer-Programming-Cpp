#include <iostream>
using namespace std;

/* A code which accepts the power ratings and usages time 8 appliances.*/

int main() {
	double power, time, energy;
	double totalEnergy = 0;
	
	for (int i = 1; i <= 8; i++)
	{
		cout << "\nApliance " << i << endl;
		
		cout << " Enter Power Rating (W): ";
		cin >> power;;
		
		cout << " Enter Usage Time (hours): ";
		cin >> time;
		
		energy = power * time;
		
		cout << " Enregy Consumed = " << energy << " Wh" << endl;
		
		totalEnergy += energy;
	}
	
	cout << "\nTotal Energy Consumed by all Appliances = "
	<< totalEnergy << " Wh" << endl;
	
	
	
	return 0;
}

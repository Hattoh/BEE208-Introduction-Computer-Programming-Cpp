#include <iostream>
using namespace std;

/* A programme that accepts 10 temperature readings from a electronic device.*/

int main() {
	double temperature, sum = 0, average;
	int count = 0;
	
	for(int i = 1; i <= 10; i++)
	{
		cout << " Enter temperature reading " << i << " :";
		cin >> temperature;
		
		if (temperature < 0)
		{
			cout << " Invalid reading skipped." << endl;
			continue;
		}
		
		sum = sum + temperature;
		count++;
	}
	
	if (count > 0)
	{
		average = sum / count;
		cout << "Average temperature =" << average << "oC" << endl;
	}
	else
	{
		cout << " No valid wtemperature readings entered." << endl;
	}
	
	
	return 0;
}

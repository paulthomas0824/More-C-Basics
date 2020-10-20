#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	string name;
	double height;
	double weight;
	double bmi;
	
	
	while (name != "EXIT")
	{
		cout << "Please enter Patients Name " << endl;
		cin >> name;
		cout << "Please enter " << name << "'s  Weight in Pounds" << endl;
	cin >> weight;
	
	cout << "Please enter " << name << "'s  Height in Inches" << endl;
	cin >> height;
	
	
	cout << "Patients name: " << name << endl;
	cout << name << "'s weight = " << weight << endl;
	cout << name << "'s height = " << height << endl;
	cout << name << "'s BMI = " << (703 * weight) / (height * height) << endl;
	
	
	
	
	if ((703 * weight) / (height * height)<= 18.5 )
	{
		cout << " " << name << " Is underweight." << endl;
	}
	
	if ((703 * weight) / (height * height) > 18.5 and  (703 * weight) / (height * height) <= 24.9)
	{
		cout << name << " Is Normal" << endl;
	}
	
	if ((703 * weight) / (height * height) > 25 and (703 * weight) / (height * height) <= 29.9)
	{
		cout << name << " Is Overweight" << endl;
	}

	if ((703 * weight) / (height * height) >= 30 )
	{
		cout << name << " Is Obese" << endl;
	}
	}
	return(0);
}

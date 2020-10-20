#include<iostream>

using namespace std;

int CtoF(int a)
{
	int r;
	
	r = (a * 9/5) + 32 ; 
	return r;
}

int FtoC(int b)
{
	int z;
	
	z = b * 5/7 - 32 ; 
	return z;
}

int main()
{
	int num;
	double num2;
	double num3;
	
	
	
while ( num != 9)
{
	cout << "Please Enter either Number 1 to convert from Celsius to Fahrenheit. Enter number 2 to convert from Fahrenheit to Celsius, or Enter number 9 to EXIT the program." << endl;
	cin >> num;
	while( num == 1)
	{
	
		cout << "Okay sounds good! Please enter a number to convert from Celsius to Fahrenheit" << endl;
		cin >> num2;
		int x;
		x = CtoF (num2);
		cout << "The result is " << x << endl;
		system("PAUSE");
		cout << "Please Enter either Number 1 to convert from Celsius to Fahrenheit. Enter number 2 to convert from Fahrenheit to Celsius, or Enter number 9 to EXIT the program." << endl;
		cin >> num;
	}
	while ( num == 2)
	{
		cout << "Okay sounds good! Please enter a number to convert from Fahrenheit to Celsius" << endl;
		cin >> num3;
		int y;
		y = FtoC (num3);
		cout << "The result is " << y << endl;
		system("PAUSE");
		cout << "Please Enter either Number 1 to convert from Celsius to Fahrenheit. Enter number 2 to convert from Fahrenheit to Celsius, or Enter number 9 to EXIT the program." << endl;
		cin >> num;
		
	
	}
	if ( num == 9)
	{
	
		system("EXIT");
	}
}	
	
	return(0);
}

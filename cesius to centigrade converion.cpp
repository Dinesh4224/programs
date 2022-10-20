#include<iostream>
using namespace std;
int main()
{
	float fahren,celsius;
	cout<<"enter the temperature in celsius\n";
	cin>>celsius;
	fahren=(9.0/5.0)*celsius+32;
	cout<<celsius<<"centigrade is equal to"<<fahren<<"fahrenheit";
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int num,n;
	cout<<"enter number\n";
	cin>>num;
	cout<<"enter bit number you wish to set\n";
	cin>>n;
	cout<<"bit set successfully\n";
	cout<<"answer."<<(num|(1<<(n-1)));
}




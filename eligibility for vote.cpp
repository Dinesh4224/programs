#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the age ";
	cin>>a;
	try
	{
		if(!(cin>>a))
		throw a;
		if(a<18)
		{
			cout<<"not eligibile for vote"<<endl;
			cout<<18-a<<" remaing age for vote";
		}
		else
		{
			cout<<"eligibile for vote";
		}
   }
   catch(...)
   {
   	cout<<"age must be in number";
   }
   
}

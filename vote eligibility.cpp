#include<iostream>
using namespace std;
class vote
{
	int age,x;
	public:
		void cal()
		{
			cout<<"enter the age:";
			cin>>age;
			if(int(age)>=0)
			{
				if(age>=18)
				{
					cout<<"eligible to vote";
					exit(0);
				}
				if(age<18 && age>0)
				{
					x=18-age;
					cout<<"not eligible to vote"<<endl;
					cout<<"after"<<x<<"years the child can vote";
					exit(0);
				}
				if(age<0)
				{
					cout<<"invalid"<<endl;
					cout<<"enter only positive numbers";
				}
				else
				{
					cout<<"invalid"<<endl;
					cout<<"characters are not allowed";
				}
			}
		}
		   
};
int main()
{
	vote v;
	v.cal();
	return 0;
}
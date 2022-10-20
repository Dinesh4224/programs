#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[]="engineer";
	cout<<"Original string: \n"<<arr<<endl;
	cout<<"string in upper case: \n";
	for(int x=0;x<strlen(arr);x++)
	putchar(toupper(arr[x]));
	return 0;
}
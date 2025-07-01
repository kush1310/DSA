// STRING LENGTH 
#include<iostream>
using namespace std;
int i = 0;
int len()
{
	char arr[300];
	cout<<"ENTER THE STRING: "<<endl;
	cin>>arr;
	while(arr[i] != NULL)
	{
		i++;
	}
	return i;
}
int main()
{
	len();
	cout<<"THE SIZE OF GIVEN STRING IS: "<<i<<endl;
	return 0;
}

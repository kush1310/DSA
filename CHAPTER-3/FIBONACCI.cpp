// FIBONACCI SERIES USING RECURSIVE METHOD
#include<iostream>
using namespace std;
int fibo(int);
int main()
{
	int num,i=0,cal;
	cout<<"ENTER THE NUMBER"<<endl;
	cin>>num;
	cout<<"FIBONACCI SERIES GENERATED IS: "<<endl;
	for(cal = 1; cal <= num; cal++)
	{
		cout<<fibo(i)<<ends;
		i++;
	}
}
int fibo(int num)
{
	if (num == 0 || num == 1)
	{
		return num;	
	}	 
	else
	{
		return (fibo(num - 1) + fibo(num - 2));
	}
}

// FACTORIAL OF GIVEN NUMBER USING RECURSIVE METHOD
#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int num,ans;
	cout<<"ENTER THE NUMBER: "<<endl;
	cin>>num;
	ans = fact(num);
	cout<<"FACTORIAL OF "<<num<<" IS: "<<ans;
	return 0;
}
int fact(int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return (fact(num-1)*num);
	}
}

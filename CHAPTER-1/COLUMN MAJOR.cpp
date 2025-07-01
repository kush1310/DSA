//IMPLEMENT ARRAY USING COLUMN MAJOR ORDER
#include<iostream>
using namespace std;
int main()
{
	int a[2][2], i, j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"ENTER VALUE IN ARRAY: "<<endl;
			cin>>a[i][j];
		}
	}
	cout<<"VALUES IN COLUMN MAJOR ORDER ARE:- "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[j][i]<<ends;
		}
		cout<<"-COLUMN"<<endl;
	}
	return 0;
}

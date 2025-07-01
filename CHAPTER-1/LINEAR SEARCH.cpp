//SEQUENTIAL OR LINEAR SEARCH
#include<iostream>
using namespace std;
void search(int[], int, int);
int main()
{
	int a[5],i,n,x;
	cout<<"ENTER NUMBER OF ELEMENTS YOU WOULD LIKE TO ENTER: "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"ENTER "<<"["<<i<<"]"<<" ELEMENT: "<<endl;
		cin>>a[i];
	}
	cout<<"ENTER VALUE TO SEARCH: "<<endl;
	cin>>x;
	search(a,n,x);
	return 0;
}
void search(int list[], int m, int x)
{
	int i, count=0;
	for(i=0;i<m;i++)
	{
		if(x==list[i])
		{
			cout<<"SEARCH IS SUCCESSFUL... DATA FOUND AT POSITION: "<<i+1<<endl;
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"NO RECORDS FOUND..."<<endl;
	}
}

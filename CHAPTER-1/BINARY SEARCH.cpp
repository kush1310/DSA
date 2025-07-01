//BINARY SEARCH
#include<iostream>
using namespace std;
void search(int list[], int n, int x)
{
	int low=0, high=n-1, count=1;
	while(low <= high)
	{
		int mid=(low + high)/2;
		if(x < list[mid])
		{
			high = mid-1;
		}
		else if(x > list[mid])
		{
			low = mid + 1;
		}
		else if(x == list[mid])
		{
			cout<<"SEARCH IS SUCCESSFUL..."<<endl;
			count = 0;
			break;
		}
		else if(count == 1)
		{
			cout<<"NO RECORD FOUND..."<<endl;
		}
	}
}
void sort(int list[],int n)
{
	int i,j,temp;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(list[i]>list[j])
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"SORTED ARRAY IS: "<<list[i]<<endl;
	}
}

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
	sort(a,n);
	cout<<"ENTER VALUE TO SEARCH: "<<endl;
	cin>>x;
	search(a,n,x);
	return 0;
}


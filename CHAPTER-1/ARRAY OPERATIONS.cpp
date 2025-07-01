//IMPLEMENT VARIOUS ARRAY OPERATIONS
#include<iostream>
using namespace std;
//FUNCTIONS
//INSERT
int arr[5]={90,20,50,40,30};
int insert(int n, int p, int x)
{
	int temp;
	temp=n-1;
	p=p-1;
	while(temp>=p)
	{
		arr[temp+1]=arr[temp];
		temp=temp-1;
	}
	arr[p]=x;
	n=n+1;
	return n;
}
//DISPLAY
int display(int n)
{
	int i;
	cout<<"VALUES OF ARRAY ARE: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
//DELETE
int delete_arr(int n, int p)
{
	int temp;
	p=p-1;
	temp=p;
	while(temp<=n-1)
	{
		arr[temp]=arr[temp+1];
		temp=temp+1;
	}
	n=n-1;
	return n;	
}

//SEARCH
void search(int x, int n)
{
	int count=0;
	while(arr[count] != x && count<n)
	{
		count=count+1;
	}
	if(count==n)
	{
		cout<<"SEARCH IS UNSUCCESSFUL....."<<endl;
	}
	else
	{
		cout<<"SEARCH IS SUCCESSFUL.....    DATA FOUND AT POSITION: "<<count+1<<endl;
	}
}

//SORTING
/*FIRST METHOD
void sort(int n)
{
	int i,pass,temp;
	for(pass=0;pass<=n-1;pass++)
	{
		for(i=pass+1;i<=n-1;i++)
		{
			if(arr[pass]>arr[i])
			{
				temp=arr[pass];
				arr[pass]=arr[i];
				arr[i]=temp;
			}
		}
	}
}*/
//SECOND METHOD
//SORTING
void sort(int n)
{
	int i,pass,temp;
	for(pass=1;pass<=n-1;pass++)
	{
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}

//MAIN FUNCTION
int main()
{
	int choice,n=5,p,x;
	do{
	cout<<"1. VIEW ARRAY"<<endl<<"2. INSERT INTO ARRAY"<<endl<<"3. DELETE ARRAY"<<endl<<"4. SEARCH IN ARRAY"<<endl<<"5. SORT ARRAY"<<endl<<"6. EXIT"<<endl<<"SELECT ANY ONE....."<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		display(n);
		break;
		
		case 2:
		cout<<"ENTER POSITION ON WHICH YOU WANT TO INSERT NEW VALUE: "<<endl;
		cin>>p;
		cout<<"ENTER VALUE TO INSERT: "<<endl;
		cin>>x;
		n=insert(n,p,x);
		display(n);
		break;
		
		case 3:
		cout<<"ENTER POSITION ON WHICH YOU WANT TO DELETE VALUE: "<<endl;
		cin>>p;
		n=delete_arr(n,p);
		display(n);
		break;
		
		case 4:
		cout<<"ENTER ELEMENT TO SEARCH.."<<endl;
		cin>>x;
		search(x,n);
		break;
		
		case 5:
		sort(n);
		display(n);
		break;
		
		case 6:
		cout<<"EXIT RETURN STATUS 1... SERVER 192.168.404 EXIT SUCCESSFULL......"<<endl<<endl<<endl;
		break;
	}
}while(choice<7);
	return 0;
}

// IMPLEMENTING PUSH AND POP OPERATIONS IN STACK USING ARRAY
#include<iostream>
using namespace std;
#define val 5
int push(int [], int);
int pop(int [], int);
int display(int [], int);

int main()
{
	int str[val];
	int top = -1;
	int choice;
	
	do
	{
		cout<<"ENTER THE CHOICE FOR OPERATION: "<<endl;
		cout<<"1. POP"<<endl<<"2. PUSH"<<endl<<"3. DISPLAY"<<endl<<"4. EXIT"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				top = pop(str,top);
				break;
				
			case 2:
				top = push(str,top);
				break;
				
			case 3:
				display(str,top);
				break;
				
			case 4:
				cout<<"SYSTEM EXIT SUCCESSFULL....."<<endl;
				return 0;
				break;
		}
	}while(choice<5);
	return 0;
}
int pop(int str[], int top)
{
	int x;
	if(top == -1)
	{
		cout<<"STACK IS UNDERFLOW...."<<endl;
	}
	else
	{
		x = str[top];
		cout<<"REMOVED VALUE IS: "<<x<<endl;
		top --;
	}
	return top;
}
int push(int str[], int top)
{
	int x;
	if(top >= val-1)
	{
		cout<<"STACK IS OVERFLOW...."<<endl;
	}
	else
	{
		cout<<"ENTER VALUE: "<<endl;
		cin>>x;
		top ++;
		str[top] = x;
	}
	return top;
}
int display(int str[], int top)
{
	int i;
	cout<<"VALUES(S) STORED IN STACK: "<<endl;
	for(i=0;i<=top;i++)
	{
		cout<<ends<<str[i]<<endl;
	}
}

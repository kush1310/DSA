//INSERT AND DELETION
#include<iostream>
using namespace std;
int push(int [], int);
int pop(int []);
int display(int []);
int size = 5;
int front = -1, rear = -1;
int main()
{
	int q[size], x,choice;
	do
	{
		cout<<"SELECT OPERATION: "<<endl;
		cout<<"1. PUSH"<<endl<<"2. POP"<<endl<<"3. DISPLAY"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"ENTER ELEMENT: "<<endl;
				cin>>x;
				push(q,x);
				break;	
			
			case 2:
				pop(q);
				break;
				
			case 3:
				display(q);
				break;
		}
	}while(choice<4);
}
int push(int q[], int x)
{
	if ((front==0 && rear==size-1) || front==rear+1)
	cout<<"CIRCULAR QUEUE IS OVERFLOW..."<<endl;
	if (front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else if (front!=0 && rear==size-1)
	{
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	q[rear]=x;
}
int pop(int q[])
{
	int value;
	if(front==-1)
	{
		cout<<"CIRCULAR QUEUE IS UNDERFLOW..."<<endl;
	}
	value=q[front];
	cout<<"POPED ELEMENT: "<<value<<endl;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==size-1)
	{
		front=0;
	}
	else
	{
		front=front+1;
	}
}
int display(int q[])
{
	int i;
	cout<<"ELEMENT STORED ARE: "<<endl;
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
	else
	{
		for(i=front;i<=size-1;i++)
		{
			cout<<q[i]<<endl;			
		}
		for(i=0;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
}

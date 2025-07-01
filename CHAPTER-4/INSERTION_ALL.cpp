// INSERTION IN LINKED LIST WITH TRAVERSAL
#include<iostream>
using namespace std;
void in_first(int);
void in_last(int);
void in_bet(int);
void display();
class node
{
	public:
		int info;
		node * link;
}*first;
int main()
{
	int item,choice;
	do
	{
		cout<<endl<<"1] INSERT AT HEAD\n2] INSERT AT TAIL\n3] INSERT IN BETWEEN\n4] DISPLAY"<<endl;
		cout<<"ENTER A CHOICE: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"ENTER ITEM: "<<endl;
				cin>>item;
				in_first(item);
				break;
			
			case 2:
				cout<<"ENTER ITEM: ";
				cin>>item;
				in_last(item);
				break;

			case 3:
				cout<<"ENTER ITEM: ";
				cin>>item;
				in_bet(item);
				break;
									
			case 4:
				cout<<"VALUES STORED IN LIST ARE: "<<endl;
				display();
				break;
		}
	}while(choice < 5 && choice > 0);
	return 0;
}

// INSERT AT HEAD

void in_first(int item)
{
	node *newnode;
	newnode = new node();
	
	if(newnode == NULL)
	{
		cout<<"MEMORY IS NOT ALOCATED..."<<endl;
		return;
	}
	newnode -> info = item;
	if(first == NULL)
	{
		newnode -> link = first;
		first = newnode;
	}
	else
	{
		newnode -> link = first;
		first = newnode;
	}
}

//INSERT AT TAIL

void in_last(int item)
{
	node *newnode, *temp;
	newnode = new node();
	
	if(newnode == NULL)
	{
		cout<<"MEMORY IS NOT ALOCATED..."<<endl;
		return;
	}
	newnode -> info = item;
	newnode -> link = NULL;

	if(first == NULL)
	{
		first = newnode;
		return;
	}
	temp = first;
	while(temp -> link != NULL)
	{
		temp = temp -> link;
	}
	temp -> link = newnode;
	return;
}

// INSERT IN BETWEEN

void in_bet(int item)
{
	node *newnode, *ptr;
	int pos, count;
	newnode = new node();
	
	if(newnode == NULL)
	{
		cout<<"MEMORY IS NOT ALOCATED..."<<endl;
		return;
	}
	newnode -> info = item;
	cout<<"ENTER THE POSITION WHERE YOU WANT TO INSERT DATA: ";
	cin>>pos;
	if(pos == 1)
	{
		newnode -> link = first;
		first = newnode;
	}
	else
	{
		count = 1;
		ptr = first;
		while(count < pos - 1 && ptr -> link != NULL)
		{
			ptr = ptr -> link;
			count++;
		}
		if(count == pos - 1)
		{
			newnode -> link = ptr -> link;
			ptr -> link = newnode;
		}
		else
		{
			cout<<"ERROR! POSITION NOT FOUND...";
		}
	}
}
//DISPLAY

void display()
{
	node *temp;
	if(first == NULL)
	{
		cout<<"LINKED LIST IS EMPTY..."<<endl;
		return;
	}
	temp = first;
	while(temp != NULL)
	{
		cout<< temp -> info<<" ADDRESS: "<<temp -> link<<" -> ";
		temp = temp -> link;
	}
}

// PROGRAM FOR BASIC IMPLEMENTATION OF LINKED LIST

#include <iostream>
using namespace std;

struct Node 
{
  int data;
  Node *next;
};

int main() 
{
  Node *head = 0, *newnode, *temp;

  int choice;

  while (choice) 
  {
    newnode = new Node;

    cout << "ENTER DATA: ";
    cin >> newnode -> data;

    newnode -> next = 0;

    if (head == 0) 
    {
      head = temp = newnode;
    } 
    else 
    {
      temp -> next = newnode;
      temp = newnode;
    }
    cout << "DO YOU WANT TO CONTINUE ( 0[NO] ,1[YES] )? ";
    cin >> choice;
  }

  // PRINTING VALUES OF LIST

  temp = head;
  cout << "STORED DATA IS: " << endl;
  while (temp != 0) 
  {
    cout << temp -> data << "   ";
    temp = temp -> next;
  }
  return 0;
}
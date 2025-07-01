// WAP TO PERFORM DELETION OPERATION OF STRING
#include<iostream>
using namespace std;

void del(char arr[], int pos, int size)
{
    int i = 0; 
    int k = 0;
    char temp[size];
    
    while(i != pos)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    i = pos + 1; 
    
    while(arr[i] != '\0')
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    temp[k] = '\0';
    
    cout << "STRING AFTER DELETION IS: " << temp << endl;
}

int main()
{
    int size;
    cout << "ENTER SIZE OF STRING: " << endl;
    cin >> size;
    
    char arr[size];
    
    cout << "ENTER A STRING: " << endl;
    for(int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    
    int pos;
    
    cout<<"PLEASE TAKE A NOTE THAT:- POSITION IS BASED ON INDEX VALUE.. HENCE FIRST CHARACTER STARTS WITH ZERO[0]..." << endl;
    cout << "ENTER POSITION TO DELETE STRING: " << endl;
    cin >> pos;
    
    if(pos >= 0 && pos < size)
    {
        del(arr, pos, size);
    }
    else
    {
        cout << "YOU HAVE ENTERED POSITION WHICH IS OUT OF SCOPE" << endl;
    }
    
    return 0;
}

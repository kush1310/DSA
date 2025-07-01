// WAP TO PERFORM APPEND OPERATION OF STRING
#include<iostream>
using namespace std;

void append(char text[], char string[])
{
    int i = 0;
    int j = 0;
    
    while(text[i] != '\0')
    {
        i++;
    }
    text[i] = '\0';
}

int main()
{
    char text[100]; 
    char string[50];
    
    cout << "ENTER ORIGINAL STRING:  ";
    cin >> text;
    cout << "ENTER THE SECOND DTRING TO APPEND: ";
    cin >> string;
    
    append(text, string);
    
    cout << "STRING AFTER APPENDING IS:  " << text << endl;
    
    return 0;
}

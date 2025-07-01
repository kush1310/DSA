// WAP TO REVERSE A ENTERED STRING
#include<iostream>
using namespace std;
void rev(char string1[], char string2[])
{
    int i = 0;
    int j = 0;
    while(string1[i] != '\0') 
    {
        i = i + 1;
    }
    i = i - 1; 
    
    while(i >= 0)
    {
        string2[j] = string1[i];
        j++;
        i--;
    }
    string2[j] = '\0';
}

int main()
{
	int size;
	cout<<"ENTER SIZE OF STRING: "<<endl;
	cin>>size;
    char string1[size];
    char string2[size];
    
    cout << "ENTER STRING:  ";
    cin >> string1;
    
    rev(string1, string2);
    cout << endl << "ORIGINAL STRING IS: " << string1 << endl;
    cout << endl << "REVERSED STRING IS: " << string2 << endl;
    
    return 0;
}

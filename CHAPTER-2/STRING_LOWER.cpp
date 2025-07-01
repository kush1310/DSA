// STRING LOWER CASE
#include<iostream>
using namespace std;
void str1(string str)
{
	int i=0;
	string str2;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str2 += str[i]+32;
		}
		else 
		{
			str2 += str[i];
		}
		i++;
	}
	str += '\0';
	cout<<"STRING CONVERTED IN LOWER CASE IS: "<<str2<<endl;
}
int main()
{
	string str;
	cout<<"ENTER A STRING: "<<endl;
	getline(cin,str);	
	str1(str);
	return 0;
}

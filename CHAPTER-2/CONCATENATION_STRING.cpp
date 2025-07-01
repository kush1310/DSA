// CONCATENATION OF STRING
#include<iostream>
using namespace std;

int len(char arr[])
{
    cout << "ENTER THE STRING 1 : " << endl;
    cin >> arr;
    int i = 0;
    while(arr[i] != NULL)
    {
        i++;
    }
    return i;
}

int len2(char arr[]) 
{
    cout << "ENTER THE STRING 2 : " << endl;
    cin >> arr;
    int j = 0;
    while(arr[j] != NULL)
    {
        j++;
    }
    return j;
}

int main()
{
    char arr1[10], arr2[10], arr3[20];
    int i = 0, j = 0, k = 0;
    int lenARR1 = len(arr1); 
    int lenARR2 = len2(arr2); 
    while(i < lenARR1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < lenARR2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    cout << "THE STRING AFTER JOINING IS: " << arr3 << endl;
    return 0;
}

#include<iostream>
using namespace std;
void sort(int arr[], int size) 
{
    int i, j;
    for(i = 0; i < size-1; i++) 
	{
        for(j = 0; j < size-i-1; j++) 
		{
            if(arr[j] > arr[j+1]) 
			{
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void display(int arr[], int size) 
{
    for(int in = 0; in < size; in++) 
	{
        cout << arr[in] << endl;
    }
}

int main() 
{
    int size;
    cout << "ENTER THE NUMBER OF ELEMENTS TO ENTER IN ARRAY: "<<endl;
    cin >> size;
    int arr[size];

    for(int a = 0; a < size; a++) 
	{
        cout << "ENTER THE VALUES IN ARRAY: "<<endl;
        cin >> arr[a];
    }
    sort(arr,size);
    cout << "SORTED VALUES OF ARRAY ARE: "<<endl;
    display(arr,size);
    return 0;
}

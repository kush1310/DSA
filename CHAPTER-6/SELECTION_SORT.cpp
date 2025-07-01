#include<iostream>
using namespace std;
void sort(int arr[], int size)
{
	int i, j, temp;
	
	for(i = 0 ; i <= size-1 ; i++)
	{
		int min = i;
		for(j = i+1 ; j <= size-1 ; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
			if (min != i)
			{
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
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

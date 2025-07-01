// IMPLEMENT COUNT SORT USING ARRAY
#include<iostream>
using namespace std;
void count(int arr1[], int size_array, int size_count, int arr3[] )
{
	int i;
	int arr2[10] = {0};
	for(i = 0; i < size_array; i++)
	{
		++arr2[arr1[i]];
	}
	for(i = 1; i <= size_count; i++)
	{
		arr2[i] = arr2[i] + arr2[i-1];
	}
	for(i = size_array-1; i >= 0; i--)
	{
		arr3[--arr2[arr1[i]]] = arr1[i];
	}
}

// DISPLAY
void display(int arr[], int size_array) 
{
    for(int i = 0; i < size_array; i++) 
	{
        cout << arr[i] << endl;
    }
}
int main()
{
	//arr1 = MAIN ARRAY
	//arr2 = COUNT ARRAY
	//arr3 = SORTED ARRAY
    int size_array; 
    cout << "ENTER THE NUMBER OF ELEMENTS FOR ARRAY: "<<endl;
    cin >> size_array;
    int arr1[size_array];

    for(int a = 0; a < size_array; a++) 
    {
        cout << "ENTER THE VALUES FOR ARRAY: "<<endl;
        cin >> arr1[a];
    }

    int arr3[size_array]; 

    int size_count = size_array; 

    cout << "SORTED VALUES OF ARRAY ARE: "<<endl;
    count(arr1, size_array, size_count, arr3);
    display(arr3, size_array);

    return 0;
}

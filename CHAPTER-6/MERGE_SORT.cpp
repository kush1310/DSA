// IMPLEMENT MERGE SORT USING ARRAY 

#include<iostream>
using namespace std;

// BUBBLE SORT FOR ARRAYS
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

// FINAL IMPLEMENT OF MERGE SORT
void mergesort(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	while(i < size1 && j < size2)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else if (arr1[i] > arr2[j])
		{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
		else 
		{
			arr3[k] = arr1[i];
			i++;
			j++;
			k++;
		}
	}
	while(i < size1)
	{
		arr3[k] = arr1[i];
		k++;
		i++;
	}
	while(j < size2)
	{
		arr3[k] = arr2[j];
		k++;
		j++;
	}
}

// DISPLAY
void display(int arr[], int size) 
{
    for(int in = 0; in < size; in++) 
	{
        cout << arr[in] << endl;
    }
}

int main()
{
	int size1, size2; 
    cout << "ENTER THE NUMBER OF ELEMENTS FOR ARRAY 1: "<<endl;
    cin >> size1;
    int arr1[size1];

    for(int a = 0; a < size1; a++) 
	{
        cout << "ENTER THE VALUES FOR ARRAY 1: "<<endl;
        cin >> arr1[a];
    }

    cout << "ENTER THE NUMBER OF ELEMENTS FOR ARRAY 2: "<<endl;
    cin >> size2;
    int arr2[size2];
    for(int a = 0; a < size2; a++) 
	{
        cout << "ENTER THE VALUES FOR ARRAY 2: "<<endl;
        cin >> arr2[a];
    }

	int arr3[size1 + size2];
	sort(arr1, size1);
	sort(arr2, size2);
	mergesort(arr1, size1, arr2, size2, arr3);

    cout << "SORTED VALUES OF MERGED ARRAY ARE: "<<endl;
    display(arr3, size1 + size2);	
	return 0;
}

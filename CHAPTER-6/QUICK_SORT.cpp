// PARTITION EXCHANGE SORT METHOD
#include<iostream>
using namespace std;
void sort(int[], int, int);
int main() 
{
    int size;
    cout << "ENTER THE NUMBER OF ELEMENTS TO ENTER IN ARRAY: " << endl;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) 
	{
        cout << "ENTER THE VALUES IN ARRAY: " << endl;
        cin >> arr[i];
    }
    sort(arr, 0, size - 1);
    cout << "SORTED VALUES OF ARRAY ARE: " << endl;
    for(int i = 0; i < size; i++) 
	{
        cout << arr[i] << endl;
    }
    return 0;
}
void sort(int arr[], int lb, int ub) 
{
    if (lb < ub) 
	{
        int i = lb + 1;
        int j = ub;
        int pivot = arr[lb];
        while (i <= j) 
		{
            while (arr[i] <= pivot) 
			{
                i++;
            }
            while (arr[j] > pivot) 
			{
                j--;
            }
            if (i < j) 
			{
                //swap(arr[i], arr[j]);
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        //swap(arr[lb], arr[j]);
        int temp = arr[j];
        arr[j] = pivot;
        pivot = temp;
        arr[lb] = pivot;
        sort(arr, lb, j - 1);
        sort(arr, j + 1, ub);
    }
}

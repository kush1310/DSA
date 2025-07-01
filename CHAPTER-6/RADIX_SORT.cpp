// RADIX SORT
#include<iostream>
#include<ctime>
using namespace std;

int delay(int milliseconds)
{
     clock_t goal = milliseconds + clock();
     while(goal>clock());
     return 1;
}
   
int getmax(int a[], int n) 
{
    int max = a[0];
    for (int i = 1; i < n; i++) 
	{
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void count_sort(int a[], int n, int pass)
{
    int b[n];
    
    int count[10] = {0};
    
    for (int i = 0; i < n; i++) 
	{
        count[(a[i] / pass) % 10]++;
    }
    
    for (int i = 1; i < 10; i++) 
	{
        count[i] += count[i-1];
    }
    
    for (int i = n - 1; i >= 0; i--) 
	{
        b[--count[(a[i] / pass) % 10]] = a[i];
    }
    
    for (int i = 0; i < n; i++) 
	{
        a[i] = b[i];
    }
}

void radix_sort(int a[], int n) 
{
    int max = getmax(a, n);
    
    for (int pass = 1; max/pass > 0; pass *= 10) 
	{
        count_sort(a, n, pass);
    }
}

int main() 
{
    int n;
    cout << "ENTER SIZE OF ARRAY: " << endl;
    cin >> n;
    
    int a[n]; 
    
    cout << "ENTER ELEMENTS IN ARRAY: " << endl;
    for(int i = 0; i < n; i++) 
	{
        cin >> a[i];
    }
    
    radix_sort(a, n);
    cout<<"KINDLY WAIT FOR 2 SECONDS... CALCULATING....." << endl;
    delay(2 * 1000);
    cout << "SORTED ARRAY IS DISPLAYED BELOW: " << endl << endl;
    for (int i = 0; i < n; i++)
	{
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

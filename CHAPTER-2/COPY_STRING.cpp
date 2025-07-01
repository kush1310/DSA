// STRING COPY
#include<iostream>
using namespace std;
int len() {
	char arr[300];
	cout << "ENTER THE STRING: " << endl;
	cin >> arr;
	int i = 0;
	while(arr[i] != NULL) {
		i++;
	}
	return i;
}

void copy() {
	char arr1[300];
	char arr2[100];
	int i = 0;

	cout << "ENTER THE ORIGINAL STRING: " << endl;
	cin >> arr2;

	while (arr2[i] != '\0') {
		arr1[i] = arr2[i];
		i++;
	}

	arr1[i] = NULL;

	cout << "COPIED STRING IS: " << arr1 << endl;
}
int main() {
	copy();
	return 0;
}

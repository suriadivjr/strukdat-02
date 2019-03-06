/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : Pretest-02
Tahun           : 2019
*/

#include <iostream>
using namespace std;

void moveZeroToFront(int arr[], int n)
{
	int temp;
		for (int i=0; i<n; i++)
	{
		if (arr[i]==0)
		{	
			temp=arr[i];
			arr[0]=arr[i];
			arr[i]=temp;
		}
	}
}

void input(int (&arr)[100], int& n)
{
	cout << "Masukkan panjang data: "; cin >> n;
	for (int i=0; i<n; i++)
	{
		cout << "Data: "; cin >> arr[i];
	}
}

void output(int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << arr[i];
	}
}

int main() 
{
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToFront(arr,n);
	output(arr,n);	
	return 0;
}

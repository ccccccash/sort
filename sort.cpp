#include<iostream>
using namespace std;

void Bubble_Sort(int *arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void Bubble_Sort2(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len -i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
}

void Bubble_Sort3(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int minOrmax = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[minOrmax] > arr[j])
			{
				minOrmax = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minOrmax];
		arr[minOrmax] = temp;
	}
}

int main()
{
	int arr[] = {5,8,7,4,1,0,2,9,6,3};
	int len = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort3(arr,len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}





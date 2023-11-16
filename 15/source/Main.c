#include <stdio.h>
void BubbleSort(int arr[], int len);

int main()
{
	int arr[] = { 22,34,3,32,82,55,89,50,37,67,85 };
	int len = (int)sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}

void BubbleSort(int arr[], int len)
{
	int i, j, temp;
	int flag = 0;
	for (i = 0;i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (!flag) break;
		len--;
	}
}
//--------------------------------------------------------------//
/*
void BubbleSort(int arr[], int len)
{
	int i, j, temp;
	int flag = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (!flag) break;
	}
}
*/


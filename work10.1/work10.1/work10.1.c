#include<stdio.h>
void Function(int *arr,int size)
{
	int left = 0;
	int right = size - 1;
	int tmp = 0;
	while (left < right)
	{
		while (left < right && (arr[right] % 2 == 0))
		{
			right--;
		}
		while (left < right && (arr[left] % 2 != 0))
		{
			left++;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	Function(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf(" %d ", arr[i]);
	}
	system("pause");
	return 0;
}
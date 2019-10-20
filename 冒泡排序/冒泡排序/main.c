#include<stdio.h>
int main()
{
	int arr[] = { 8, 6, 9, 1, 4, 2, 0, 7, 5, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i-1; j++)//依次将最大数放到最后。
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int y = 0; y < len; y++)
	{
		printf("%d ", arr[y]);
	}
	system("pause");
	return 0;
}
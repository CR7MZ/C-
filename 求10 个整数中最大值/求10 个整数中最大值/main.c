#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int arr[10] = { 1, 6, 9, 8, 6, 3, 5, 2, 8, 12 };
	int max = arr[0];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值为%d", max);
	printf("\n");
	 system("pause");
	return 0;
}
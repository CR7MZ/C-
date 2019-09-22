#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//解题思路：首先这是一个有序数组，说明第一个元素到最后一个是递增的。
//用两个指针分别指向第一个元素和最后一个元素，当两个指针所指向元素的数值之和大于k，
//则 j–（也就是指向最后一个元素的指针），当数值之和小于k，则 i++（也就是指向第一个元素的指针）
int test(int* arr,int len,int* num1,int* num2,int k)
{
	int i=0;
	int j = len - 1;
	while (i < j)
	{
		if ((arr[i] + arr[j])>k)
		{
			j--;
		}
		else if ((arr[i] + arr[j]) < k)
		{
			i++;
		}
		else
		{
			*num1 = i;
			*num2 = j;
			break;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &k);
	test(arr, len, &i, &j,k);
	printf("两个数的下标分别是：%d %d", i, j);
	system("pause");
	return 0;
}
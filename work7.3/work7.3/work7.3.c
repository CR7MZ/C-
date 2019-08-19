#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main()
{
	int num = 0;
	int i = 0, j = 0;
	int arr[32];
	int res = 0;
	printf("输入一个数：");
	scanf("%d", &num);
	printf("这个数的每一位是：");
	for (i = 0; i < 32; i++)
	{
		arr[j] = ((num >> i) & 1);
		j++;
	}
	for (i = 31; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int check(int num)
{
	int sum = 0;
	while (num)
	{
		sum = sum * 10 + num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	int num = 0;
	printf("请输入人一个数：");
	scanf("%d", &num);
	if (check(num) ==num )
	{
		printf("是回文数！！！");
	}
	else
	{
		printf("不是回文数！！！");
	}
	system("pause");
	return 0;
}
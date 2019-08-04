#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int sum=0, n,tmp=0;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 1; i <= 5; i++)
	{
		tmp = tmp *10 + n;
		sum += tmp;
	}
	printf("%d", sum);
		system("pause");
	return 0;
}
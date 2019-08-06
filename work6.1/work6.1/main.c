#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归
int fib(int n)
{
	if (n <=2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int res = fib(6);
	printf("%d", res);
	system("pause");
	return 0;
}
//非递归
int main()
{
	int a = 1, b = 1;
	int c=0,n=0,i;
	printf("请输入你想要的第几个斐波那锲数：");
		scanf("%d", &n);
	for (i = 0; i < n - 2; i++)
	{
		c = a + b;
		a = b; 
		b = c;
	}
	printf("斐波那锲数是：%d", c);
	system("pause");
	return 0;
}
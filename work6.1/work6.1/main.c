#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ݹ�
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
//�ǵݹ�
int main()
{
	int a = 1, b = 1;
	int c=0,n=0,i;
	printf("����������Ҫ�ĵڼ���쳲���������");
		scanf("%d", &n);
	for (i = 0; i < n - 2; i++)
	{
		c = a + b;
		a = b; 
		b = c;
	}
	printf("쳲��������ǣ�%d", c);
	system("pause");
	return 0;
}
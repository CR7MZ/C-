#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() //相减法
{
	int a, b;
	while (1)
	{
		printf("请输入两个数：");
		scanf("%d%d", &a, &b);
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		printf("在最大公因数为：%d\n", a);
	}
	system("pause");
	return 0;
}

int main()// 穷举法
{
	int a, b, c;
	while (1)
	{
		printf("请输入两个数：");
		scanf("%d%d", &a, &b);
		c = (a > b) ? b : a;
		while (a%c != 0 || b%c != 0)
		{
			c--;
		}
		printf("最大公约数为%d",c);
	}
	system("pause");
	return 0;
}

int main()//辗转相除法
{
	int a, b, c;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	c = a%b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("最大公约数为：%d", b);
	system("pause");
	return 0;
}
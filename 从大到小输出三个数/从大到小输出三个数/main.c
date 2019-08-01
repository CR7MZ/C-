#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z, t;
	printf("输入三个数字：");
	scanf("%d%d%d", &x, &y, &z);
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x < z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y < z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("这三个数由大到小的排列顺序为%d %d %d", x, y, z);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int My_pow(int x, int y)
{
	int sum = 1;
	for (int i = 1; i <= y; i++)
	{
		sum = sum*x;
	}
	return sum;
}
int main()
{
	int x = 0, y = 0;
	printf("������X Y:\n ");
	scanf("%d %d",&x, &y);
	int ret=My_pow(x, y);
	printf(" %d��%d�η���:%d\n",x,y, ret);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
bool check(int x)
{
	int y = x;
	int tmp = 0;
	if (x == 0)
		return true;
	if (x<0 || (x % 10) == 0)//如果为负数，或者10的倍数，一定不是回文数
		return false;
	while (x)
	{
		tmp = tmp * 10 + (x % 10);
		x /= 10;
	}
	return tmp == y ? true : false;
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
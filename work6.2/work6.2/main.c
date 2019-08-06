#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ตÝน้
int fac(int k,int n)
{
	if (k == 1)
	{
		return n;
	}
	return fac(k - 1, n)*n;
}
int main()
{
	int res = fac(3, 3);
	printf("%d\n", res);
	system("pause");
	return 0;
}
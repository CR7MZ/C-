#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  Func(int* a, int len)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < len; i++)
	{
		tmp ^= a[i];
	}
	return tmp;
}
int main()
{
	int a[] = { 5, 5, 2, 2, 3, 4, 4 };
	int len = sizeof(a) / sizeof(a[0]);
	Func(a, len);
	printf("%d\n", Func(a, len));
	system("pause");
	return 0;
}
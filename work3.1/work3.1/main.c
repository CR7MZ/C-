#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[5] = { 1, 6, 9, 8, 5 };
	int b[5] = { 2, 5, 9, 4, 3 };
	int i;
	int tmp=0;
	printf("a[i]Îª£º");
	for (i = 0; i <= 4; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
		printf("%d", a[i]);
	}
	printf("\n");
	printf("b[i]Îª£º");
	for (i = 0; i <= 4; i++)
	{
		printf("%d", b[i]);
	}
	system("pause");
	return 0;
}
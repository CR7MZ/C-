#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int a[] = { 0 };
	printf("�������������֣�");
	for (i = 0; i <= 2; i++)
	{
		scanf("%d", &a[i]);
	}
	int tmp;
	for (i = 0; i <= 2; i++)
	{
		if (a[i] < a[i + 1])
		{
			tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
		}
	}
	for (i = 0; i <= 2; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}

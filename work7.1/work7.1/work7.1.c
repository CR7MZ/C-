#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include<stdio.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2)
		{
			count++;
		}
		value = value / 2;
	}
	return count;
}
int main()
{
	int i = 0;
	int result = 0;
	printf("������һ������\n");
	scanf("%d", &i);
	result = count_one_bits(i);
	printf("һ����%d��1\n", result);
	system("pause");
	return 0;
}
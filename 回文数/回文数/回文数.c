#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int check(int num)
{
	int sum = 0;
	while (num)
	{
		sum = sum * 10 + num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	int num = 0;
	printf("��������һ������");
	scanf("%d", &num);
	if (check(num) ==num )
	{
		printf("�ǻ�����������");
	}
	else
	{
		printf("���ǻ�����������");
	}
	system("pause");
	return 0;
}
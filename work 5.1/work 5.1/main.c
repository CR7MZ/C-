#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num=rand()%100;
	while (1)
	{
		int n;
		printf("please enter a number:\n");
		scanf("%d", &n);
		if (n > num)
		{
			printf("����\n");
		}
		else if (n < num)
		{
			printf("С��\n");
		}
		else
		{
			printf("�ҵ���\n");
			break;
		}
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void menu()//������
{
	printf("************\n");
	printf("*1.��ʼ��Ϸ*\n");
	printf("*0.�˳���Ϸ*\n");
	printf("************\n");
}
void game()
{
	int  num = rand() % 100 + 1;
	int n = 0;
	while (1)
	{
		printf("������һ������");
		putchar('\n');
		scanf("%d", &n);
		if (n > num)
		{
			printf("����\n");
			putchar('\n');
		}
		else if (n < num)
		{
			printf("С��\n");
			putchar('\n');
		}
		else
		{
			int x = 0;
			printf("��ϲ��ش���ȷ������\n");
			printf("****1.������Ϸ****\n");
			printf("******2.�˳�******\n");
			printf("�����룺\n");
			scanf("%d", &x);
			switch (x)
			{
			case 1:
				game();
				break;
			case 2:
				break;
			default:
				printf("����������\n");
				putchar('\n');
				Sleep(1000);
				break;
			}
		}
	}
}
int main()
{
	int n = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("������������������\n");
			putchar('\n');
			Sleep(1000);
			break;
		}
	} while (n);
	system("pause");
	return 0;
}
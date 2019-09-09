
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void menu()//猜数字
{
	printf("************\n");
	printf("*1.开始游戏*\n");
	printf("*0.退出游戏*\n");
	printf("************\n");
}
void game()
{
	int  num = rand() % 100 + 1;
	int n = 0;
	while (1)
	{
		printf("请输入一个数：");
		putchar('\n');
		scanf("%d", &n);
		if (n > num)
		{
			printf("大了\n");
			putchar('\n');
		}
		else if (n < num)
		{
			printf("小了\n");
			putchar('\n');
		}
		else
		{
			int x = 0;
			printf("恭喜你回答正确！！！\n");
			printf("****1.继续游戏****\n");
			printf("******2.退出******\n");
			printf("请输入：\n");
			scanf("%d", &x);
			switch (x)
			{
			case 1:
				game();
				break;
			case 2:
				break;
			default:
				printf("请重新输入\n");
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
		printf("请选择\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新输入\n");
			putchar('\n');
			Sleep(1000);
			break;
		}
	} while (n);
	system("pause");
	return 0;
}
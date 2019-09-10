#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.使用字符类型二维数组来表示棋盘（3*3），
//使用'x'表示玩家的子，'o'表示电脑的子。
//2.玩家落子，给玩家一个有好的提示，提示让玩家了落子，输入一组坐标（x,y）。
//3.电脑落子，电脑随机下（随机数的方式）。
//4.判定游戏结束
//玩家获胜
//电脑获胜
//和棋
//游戏没结束

//玩家落完子和电脑落完子 都要进行第4步的判定游戏结束。 
#define ROW 3
#define COL 3
char g_arr[ROW][COL];//g_表示全局变量
void Init()//把二维数组都赋值为' '。棋盘初始化全为空格。
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			g_arr[row][col] = ' ';
		}
	}
}
void Printf()
{
	int row = 0;
	for ( row = 0; row < ROW; row++)
	{
		printf("| %c | %c | %c |\n", g_arr[row][0], g_arr[row][1], g_arr[row][2]);
		printf("|___|___|___|\n");
	}
}
Playermove()
{
	printf("玩家落子");
	while (1)
	{
		
		int row = 0, col = 0;
		printf("请输入坐标：");
		scanf("%d %d", &row, &col);
		if (row<0 || row>=ROW || col<0 || col>=COL)
		{
			printf("输入不合法，请重新输入!\n");
			continue;
		}
		if (g_arr[row][col] != ' ')
		{
			printf("此处有子,请重新输入\n");
			continue;
		}
		g_arr[row][col] = 'x';
		break;
	}
}
void Computermove()
{
	printf("电脑落子\n");
	while (1)
	{
		int row = rand() % ROW;
		int col = rand() % COL;//在0~2之间找随机数,用宏定义的ROW和COL，这样方便改变。
		if (g_arr[row][col] != ' ')
		{
			continue;
		}
		g_arr[row][col] = 'o';
		break;
	}
}
int  IsFull()//如果满了返回1，如果没满返回0；
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			if (g_arr[row][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char checkwinner()
{
	//先检查所有的行
	for (int row = 0; row < ROW; row++)
	{
		if (g_arr[row][0] == g_arr[row][1] && g_arr[row][0]
			== g_arr[row][2] && g_arr[row][0] != ' ')
		{
			return g_arr[row][0];
		}
	}
	//检查所有的列
	for (int col = 0; col < COL; col++)
	{
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col]
			== g_arr[2][col] && g_arr[0][col] != ' ')
		{
			return g_arr[0][col];
		}
	}
	//检查所有的对角线
	if (g_arr[0][0] == g_arr[1][1] && g_arr[0][0] == g_arr[2][2] && g_arr[0][0]!=' ')
	{
		return g_arr[0][0];
	}
	if (g_arr[2][0] == g_arr[1][1] && g_arr[2][0] == g_arr[0][2] && g_arr[2][0]!=' ')
	{
		return g_arr[2][0];
	}
	//判断平局
	if (IsFull())
	{
		return 'q';
	}
	return ' ';
}
int main()
{
	srand((unsigned int)time(0));
	Init();
	char winner = '\0';
	while (1)
	{
		Printf();
		Playermove();
		winner = checkwinner();
		if (winner != ' ')
		{ 
			break;
		}
		Computermove();
		winner = checkwinner();
		if (winner != ' ')
		{
			break;
		}
	}
	if (winner == 'x')
	{
		printf("你赢了\n");
	}
	else if (winner == 'o')
	{
		printf("你输了！\n");
	}
	else 
	{
		printf("你和电脑平局\n");
	}
	system("pause");
	return 0;

}
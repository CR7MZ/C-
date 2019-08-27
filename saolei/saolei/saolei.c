#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define Mine_count 10//雷数
int Menu()
{
	printf("****************\n");
	printf("1.开始游戏\n");
	printf("0.游戏结束\n");
	printf("****************\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[][COL + 2], char mine_map[][COL + 2])//二维数组传参，可以省略第一个方框里的数字，不能省略第二个方框里的数字。一位数组可以。
{
	for (int row = 0; row < ROW + 2; row++)
	{
		for (int col = 0; col < COL + 2; col++)
		{
			show_map[row][col] = ' ';
		}
	}//把show_map初始化为全是' '。
	for (int row = 0; row < ROW + 2; row++)
	{
		for (int col = 0; col < COL + 2; col++)
		{
			mine_map[row][col] = '0';
		}
	}//把mine_map初始化为全是'0'。
	int mine_count = Mine_count;
	while (mine_count>0)
	{
		int row = rand() % ROW + 1;//尝试随机设置地雷，设置随机数的范围为1—9
		int col = rand() % COL + 1;
		if (mine_map[row][col] == '1')
		{
			//当随机产生的坐标已经有地雷了。
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
 	}//把mine_map哪些地方是地雷排布好。

}
void Displaymap(char map[ROW + 2][COL + 2])
{
	//打印地图，先打印坐标
	printf("   ");//打印出坐标左上角的空格。
	//打印列的坐标
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印上边框
	for (int i = 1; i <= ROW; i++)
	{
		printf("___");
	}
	printf("\n");
	//按行打印地图内容 
	for (int row = 1; row <= ROW; row++)
	{
		//先打印行号
		printf(" %d|", row);
		//打印该行的每一列
		for (int col = 1; col <= COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[ROW + 2][COL + 2],
	char mine_map[ROW + 2][COL + 2],
	int row, int col)//括号里的row,col是你点开的格子的坐标。
{
	//统计当前你点开的格子周围的8个格子有几个地雷，把数字更新到show_map上
	int count = 0;
	//有了边框就不用考虑越界问题。
	if (mine_map[row - 1][col - 1] == '1')
	{
		++count;
	}
	if (mine_map[row - 1][col] == '1')
	{
		++count;
	}
	if (mine_map[row - 1][col + 1] == '1')
	{
		++count;
	}
	if (mine_map[row][col - 1] == '1')
	{
		++count;
	}
	if (mine_map[row][col + 1] == '1')
	{
		++count;
	}
	if (mine_map[row + 1][col - 1] == '1')
	{
		++count;
	}
	if (mine_map[row + 1][col] == '1')
	{
		++count;
	}
	if (mine_map[row + 1][col + 1] == '1')
	{
		++count;
	}
	show_map[row][col] = '0' + count;
}
//每次调用这个函数就开始一句扫雷游戏。
void Game()
{
	//+2是要在地图外加一层边框；
	char show_map[ROW + 2][COL + 2];
	char mine_map[ROW + 2][COL + 2];
	//由于数组作为参数会隐式转换为指针，拿着数组名传到函数里面就已经成为指针了。 
	//在函数内部对参数进行修改是会影响到外部的数组的。
	Init(show_map, mine_map);
	int safe_blank_count = 0;//用来计量当前不是地雷的格子数量。
	while (1)
	{
		Displaymap(show_map);
		int row = 0;
		int col = 0;
		printf("输入一个坐标：");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL)//判断输入坐标非法。
		{
			printf("您输入的坐标不合法，请重新输入！\n");
			continue;
		}
		//接下来验证是否踩到地雷。
		if (mine_map[row][col] == '1')
		{
			printf("游戏结束，扫雷失败！\n");
			break;
		}
		//验证扫雷是否成功
		++safe_blank_count;
		if (safe_blank_count == ROW*COL - Mine_count)
		{
			printf("扫雷成功，你赢了！！\n");
			break;
		}
		//更新地图的状态。
		UpdateShowMap(show_map, mine_map, row, col);
		//cls->苍老师
		system("cls");//清屏操作
	}
	Displaymap(mine_map); 
}
int main()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 0)
		{
			printf("byebye\n");
			break;
		}
		if (choice == 1)
		{
			Game();
		}
	}
	system("pause");
	return 0;
}
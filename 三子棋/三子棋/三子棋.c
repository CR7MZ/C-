#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.ʹ���ַ����Ͷ�ά��������ʾ���̣�3*3����
//ʹ��'x'��ʾ��ҵ��ӣ�'o'��ʾ���Ե��ӡ�
//2.������ӣ������һ���кõ���ʾ����ʾ����������ӣ�����һ�����꣨x,y����
//3.�������ӣ���������£�������ķ�ʽ����
//4.�ж���Ϸ����
//��һ�ʤ
//���Ի�ʤ
//����
//��Ϸû����

//��������Ӻ͵��������� ��Ҫ���е�4�����ж���Ϸ������ 
#define ROW 3
#define COL 3
char g_arr[ROW][COL];//g_��ʾȫ�ֱ���
void Init()//�Ѷ�ά���鶼��ֵΪ' '�����̳�ʼ��ȫΪ�ո�
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
	printf("�������");
	while (1)
	{
		
		int row = 0, col = 0;
		printf("���������꣺");
		scanf("%d %d", &row, &col);
		if (row<0 || row>=ROW || col<0 || col>=COL)
		{
			printf("���벻�Ϸ�������������!\n");
			continue;
		}
		if (g_arr[row][col] != ' ')
		{
			printf("�˴�����,����������\n");
			continue;
		}
		g_arr[row][col] = 'x';
		break;
	}
}
void Computermove()
{
	printf("��������\n");
	while (1)
	{
		int row = rand() % ROW;
		int col = rand() % COL;//��0~2֮���������,�ú궨���ROW��COL����������ı䡣
		if (g_arr[row][col] != ' ')
		{
			continue;
		}
		g_arr[row][col] = 'o';
		break;
	}
}
int  IsFull()//������˷���1�����û������0��
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
	//�ȼ�����е���
	for (int row = 0; row < ROW; row++)
	{
		if (g_arr[row][0] == g_arr[row][1] && g_arr[row][0]
			== g_arr[row][2] && g_arr[row][0] != ' ')
		{
			return g_arr[row][0];
		}
	}
	//������е���
	for (int col = 0; col < COL; col++)
	{
		if (g_arr[0][col] == g_arr[1][col] && g_arr[0][col]
			== g_arr[2][col] && g_arr[0][col] != ' ')
		{
			return g_arr[0][col];
		}
	}
	//������еĶԽ���
	if (g_arr[0][0] == g_arr[1][1] && g_arr[0][0] == g_arr[2][2] && g_arr[0][0]!=' ')
	{
		return g_arr[0][0];
	}
	if (g_arr[2][0] == g_arr[1][1] && g_arr[2][0] == g_arr[0][2] && g_arr[2][0]!=' ')
	{
		return g_arr[2][0];
	}
	//�ж�ƽ��
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
		printf("��Ӯ��\n");
	}
	else if (winner == 'o')
	{
		printf("�����ˣ�\n");
	}
	else 
	{
		printf("��͵���ƽ��\n");
	}
	system("pause");
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define Mine_count 10//����
int Menu()
{
	printf("****************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.��Ϸ����\n");
	printf("****************\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[][COL + 2], char mine_map[][COL + 2])//��ά���鴫�Σ�����ʡ�Ե�һ������������֣�����ʡ�Եڶ�������������֡�һλ������ԡ�
{
	for (int row = 0; row < ROW + 2; row++)
	{
		for (int col = 0; col < COL + 2; col++)
		{
			show_map[row][col] = ' ';
		}
	}//��show_map��ʼ��Ϊȫ��' '��
	for (int row = 0; row < ROW + 2; row++)
	{
		for (int col = 0; col < COL + 2; col++)
		{
			mine_map[row][col] = '0';
		}
	}//��mine_map��ʼ��Ϊȫ��'0'��
	int mine_count = Mine_count;
	while (mine_count>0)
	{
		int row = rand() % ROW + 1;//����������õ��ף�����������ķ�ΧΪ1��9
		int col = rand() % COL + 1;
		if (mine_map[row][col] == '1')
		{
			//����������������Ѿ��е����ˡ�
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
 	}//��mine_map��Щ�ط��ǵ����Ų��á�

}
void Displaymap(char map[ROW + 2][COL + 2])
{
	//��ӡ��ͼ���ȴ�ӡ����
	printf("   ");//��ӡ���������ϽǵĿո�
	//��ӡ�е�����
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ�ϱ߿�
	for (int i = 1; i <= ROW; i++)
	{
		printf("___");
	}
	printf("\n");
	//���д�ӡ��ͼ���� 
	for (int row = 1; row <= ROW; row++)
	{
		//�ȴ�ӡ�к�
		printf(" %d|", row);
		//��ӡ���е�ÿһ��
		for (int col = 1; col <= COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowMap(char show_map[ROW + 2][COL + 2],
	char mine_map[ROW + 2][COL + 2],
	int row, int col)//�������row,col����㿪�ĸ��ӵ����ꡣ
{
	//ͳ�Ƶ�ǰ��㿪�ĸ�����Χ��8�������м������ף������ָ��µ�show_map��
	int count = 0;
	//���˱߿�Ͳ��ÿ���Խ�����⡣
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
//ÿ�ε�����������Ϳ�ʼһ��ɨ����Ϸ��
void Game()
{
	//+2��Ҫ�ڵ�ͼ���һ��߿�
	char show_map[ROW + 2][COL + 2];
	char mine_map[ROW + 2][COL + 2];
	//����������Ϊ��������ʽת��Ϊָ�룬������������������������Ѿ���Ϊָ���ˡ� 
	//�ں����ڲ��Բ��������޸��ǻ�Ӱ�쵽�ⲿ������ġ�
	Init(show_map, mine_map);
	int safe_blank_count = 0;//����������ǰ���ǵ��׵ĸ���������
	while (1)
	{
		Displaymap(show_map);
		int row = 0;
		int col = 0;
		printf("����һ�����꣺");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL)//�ж���������Ƿ���
		{
			printf("����������겻�Ϸ������������룡\n");
			continue;
		}
		//��������֤�Ƿ�ȵ����ס�
		if (mine_map[row][col] == '1')
		{
			printf("��Ϸ������ɨ��ʧ�ܣ�\n");
			break;
		}
		//��֤ɨ���Ƿ�ɹ�
		++safe_blank_count;
		if (safe_blank_count == ROW*COL - Mine_count)
		{
			printf("ɨ�׳ɹ�����Ӯ�ˣ���\n");
			break;
		}
		//���µ�ͼ��״̬��
		UpdateShowMap(show_map, mine_map, row, col);
		//cls->����ʦ
		system("cls");//��������
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
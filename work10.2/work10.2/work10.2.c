#include<stdio.h>
int  findkey(int *str[3][3],int*px,int*py,int key)
//�ȴ����Ͻǿ�ʼ���������Ͻǵ�ֵ��Ҫ�ҵ���ֵС�����Ƶ���һ��.
//�����Ͻǵ�ֵ��Ҫ�ҵ�ֵ�����Ƶ���һ�С�
{
	int x = 0;
	int y = *py - 1;
	while ((x < *px)&&(y >= 0))
	{
		if (str[x][y] == key)
		{
			*px = x;
			*py = y;
			return;
		}
		else if (str[x][y] < key)
		{
			x++;
		}
		else
		{
			y--;
		}
	}
	*px = -1;
	*py = -1;
}
int main()
{
	int str[3][3] = { 1, 3, 4,
		              2, 4, 5,
		              4, 5, 6 };
	int x = 3;
	int y = 3;
	findkey(str, &x, &y, 5);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}
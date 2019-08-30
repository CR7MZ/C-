#include<stdio.h>
int  findkey(int *str[3][3],int*px,int*py,int key)
//先从右上角开始看，若右上角的值比要找到的值小，则移到下一行.
//若右上角的值比要找的值大，则移到上一列。
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
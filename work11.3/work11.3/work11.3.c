#include<stdio.h>
#include<stdlib.h>
//����˼·Ӧ�ð����鶼�������
//1���������������������Ľ������������һ�����������Ľ����
//2�������������У�������������posλΪ1���±�pos��
//3���������Ե�posλΪ1���߲�Ϊ1��Ϊ���������顣
//4��������������ֱ�������
void Func(int*arr, int len, int* px, int* py)
{
	int i = 0;
	int sum = 0;
	int pos = 0;
	for ( i = 0; i < len; i++)
	{
		sum ^= arr[i];
	}
	for ( i = 0; i < len; i++)
	{
		if (((sum >> i) & 1) == 1)
		{
			pos = i;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px =*px^ arr[i];
		}
		else
		{
			*py = *py^ arr[i];
		}
	}
}
int main()
{
	int arr[] = { 1, 1, 3, 4, 9, 4, 9, 2, 6, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Func(arr, size, &x, &y);
	printf("%d,%d",x,y);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5
void SetTriangle(int arr[N][N])
{
	int row = 0, col = 0;//行 列
	for (row = 0; row < N; row++)
	{
		for (col = 0; col <= row; col++)
		{
			arr[row][0] = 1;//把各行的第一列设置为1
			if ((row >= 1) &&( col >= 1))
			{
				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
			}
		}
	}
}
void PrintTriangle(int arr[N][N])
{
	int row = 0, col = 0;
	for (row = 0; row < N; row++)
	{
		for (col = 0; col <= row; col++)
		{
			printf("%3d", arr[row][col]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[N][N] = { 0 };
	SetTriangle( arr);
	PrintTriangle(arr);
	system("pause");
	return 0;
}
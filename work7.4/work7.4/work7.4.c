#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入两个数：\n");
	scanf("%d%d", &num1,&num2);
	int i = 0,count=0;
	for (i = 0; i < 32; i++)
	{
		if (((num1 >> i) & 1) != ((num2 >> i) & 1))
		{
			count++;
		}
	}
	printf("一共有%d个位不同", count);
	system("pause");
	return  0;
}
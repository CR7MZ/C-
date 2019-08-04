#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,x,y,z,count=0;
	for (i = 100; i <= 999; i++)
	{
		z = i / 100;
		y = i / 10 - z * 10;
		x = i % 10;
		if (i ==x*x*x + y*y*y + z*z*z)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("一共有%d个水仙花数", count);
	system("pause");
	return 0;
}
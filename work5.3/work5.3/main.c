#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char  num[10] = { 0 };
	int i;
	char  *snum = "554598";
	for (i = 0; i < 3; i++)
	{

		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%s", num);
		if (*snum == *num)//0 == strcmp(num,snum)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else 
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	if (i < 3)
	{
		printf("³É¹¦");
	}
	else
	{
		printf("µÇÂ½Ê§°Ü\n");
	}
	system("pause");
	return 0;
}
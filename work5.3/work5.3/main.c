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

		printf("���������룺");
		scanf("%s", num);
		if (*snum == *num)//0 == strcmp(num,snum)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else 
		{
			printf("�������\n");
		}
	}
	if (i < 3)
	{
		printf("�ɹ�");
	}
	else
	{
		printf("��½ʧ��\n");
	}
	system("pause");
	return 0;
}
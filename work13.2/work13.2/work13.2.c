#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���1���ӹػ�������������ȡ���ػ�������");
	scanf("%s", a);
	if (strcmp(a, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	system("pause");
	return 0;
}
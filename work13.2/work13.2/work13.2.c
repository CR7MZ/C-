#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将于1分钟关机，输入我是猪取消关机！！！");
	scanf("%s", a);
	if (strcmp(a, "我是猪") == 0)
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
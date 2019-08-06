#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//µİ¹é
int mystrlen(char*str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + mystrlen(str + 1);
}
int main()
{
	char str[] = "welcome";
	int res = mystrlen(str);
	printf("%d", res);
	system("pause");
	return 0;
}
//·Çµİ¹é
int  mystrlen(char*str)
{
	int count=0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "welcome";
	int res = mystrlen(str);
	printf("%d", res);
	system("pause");
	return 0;
}
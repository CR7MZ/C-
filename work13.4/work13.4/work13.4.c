#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void replace(char* str)
{
	assert(str);
	int newlen = 0;
	int oldlen = 0;
	int blank = 0;
	int newback = 0;
	int oldback = 0;
	while (str[oldlen] != '\0')
	{
		if (str[oldlen] == ' ')
		{
			blank++;
		}
		oldlen++;
	}
	newlen = oldlen + 2 * blank;
	newback = newlen - 1;
	oldback = oldlen - 1;
	while (oldback != 0)
	{
		if (str[oldback] == ' ')
		{
			str[newback--] = '0';
			str[newback--] = '2';
			str[newback] = '%';
		}
		else
		{
			str[newback] = str[oldback];
		}
		oldback--;
		newback--;
	}
}
int main()
{
	char a[50] = "abc defgx yz";
	replace(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
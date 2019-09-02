#include<stdio.h>
#include<string.h>
#include<assert.h>
int My_strncmp(const char * str1, const char * str2, int num)//将字符串str1的最多num个字符与C字符串str2的字符进行比较。
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (str1 != '\0'&&str2 != '\0'&&num--)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
	}
	if ((*str1 == '\0') && (*str2 != '\0'))
	{
		return -1;
	}
	else if ((*str2 == '\0') && (*str1 != '\0'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char* str1 = "asdfg";
	char* str2 = "Asdfg";
	int ret=My_strncmp(str1, str2, 4);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
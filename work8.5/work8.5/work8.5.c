#include<stdio.h>
#include<string.h>
#include<assert.h>
char*My_strcmp(const char * str1, const char * str2)
{
	while ((*str1 != '\0') && (*str2 != '\0')) 
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
			++str1;
			++str2;
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
	char*str1 = "fsd";
	char*str2 = "asd";
	int ret=My_strcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
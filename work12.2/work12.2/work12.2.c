#include<stdio.h>
#include<string.h>
#include<assert.h>
char* My_strncat(char * des, const char * src, int num)
{
	char* ret = des;

	assert(des != NULL);
	assert(src != NULL);
	while (*des != '\0')
	{
		des++;
	}
	int i = 0;
	for (; i < num; i++)
	{
		*des = *src;
		des++;
		*src++;
	}
	return ret;
}int main()
{
	char str[20] = "I am a ";
	char*str1 = "bit person";
	My_strncat(str, str1 ,10);
	printf(" %s\n", str);
	system("pause");
	return 0;
}
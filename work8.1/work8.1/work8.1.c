#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char*My_strcpy(char*dest, const char*src)
{
	char*ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[10] = "asd";
	char  *arr2 = "zxcvef" ;
	My_strcpy(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}
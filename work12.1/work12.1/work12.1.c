#include<stdio.h>
#include<string.h>
#include<assert.h>
char * My_strncpy(char * des, const char * src, int num)
{
	//char*ret = des;
	assert(des != NULL);
	assert(src != NULL);
	int i = 0;
	while (i<num)
	{
		*des = *src;
		des++;
		src++;
		i++;
	}
	return des;
}int main()
{
	char arr1[] = "are   you ok";
	char*arr2 = "hi are";
	My_strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char*left, char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char*str, int k)
{
	int len = strlen(str);
	assert(str != NULL&&k <= len);
	if (str == NULL||k > len)
	{
		return 0;
	}
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int  is_left_move(char*str, const char*p)//进行遍历，左旋一次和*p比较一次。
{
	int len = strlen(str);
	assert(str != NULL&&p != NULL&&strlen(str) == strlen(p));
	for (int i = 0; i < len; i++)
	{
		left_move(str, 1);
		if (strcmp(str, p) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str[] = "AABCD";
	char*p = "BCDAA";

	int ret = is_left_move(str, p);
	if (ret == 1)
	{
		printf("is move\n");
	}
	else
	{
		printf("is not\n");
	}
	system("pause");
	return 0;
}
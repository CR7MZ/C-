#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char*left, char*right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void  left_move(char*str,int k)//左旋要用三部翻转逆置来解决，第一步将要左旋的那K个字母逆置，
//第二部将剩下的字母逆置，第三部整体逆置。
{
	int len = strlen(str);
	//防御性检查
	assert(str != NULL&&k <= strlen(str));
	if (str == NULL||k > strlen(str))
	{
		return;
	}
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int main()
{
	char str[] = "abcdef";//此时不能用*str="ABCDE"，因为它无法被改变。
	left_move(str, 5);
	printf("%s\n", str);
	system("pause");
	return 0;
}
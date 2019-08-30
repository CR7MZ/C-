#include<stdio.h>
void reverse(char*left,char*right)
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
int My_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reversestr(char*str)
{
	char *left = str;
	char*right = str + My_strlen(str) - 1;
	reverse(left, right);
	char*cur = str;
	while (*cur != '\0')
	{
		char*start = cur;
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		if (*cur == ' ')
		{
			cur++;
		}
	}
}
int main()
{
	char str[20] = "i am a student";//此时只能传数组不能传字符串。字符串无法被修改的。
	reversestr(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
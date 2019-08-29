//比较两数字大小，不能使用大于、小于、if。用位运算
//可以通过看两整数相减为正数或者为负数来判断。
#include<stdio.h>
int max(int a, int b)
{
	return ((a - b) >> 31) ? -1 : (a - b ? 1 : 0);//先将a-b，将a-b向右移动31个比特位到符号位，
	//如果符号位为1则a<b，若不是再看a-b是否>0，若是则a>b,若a-b=0则a=b。
}
int main()
{
	int a = 30;
	int b = 20;
	int ret=max(a, b);
	printf("%d", ret);
	system("pause");
	return 0;
}
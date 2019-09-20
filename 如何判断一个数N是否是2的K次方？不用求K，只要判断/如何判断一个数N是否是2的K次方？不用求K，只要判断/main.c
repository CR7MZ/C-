#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void CheckIsNumber(int n)//用位运算来解决，通过2的K次方我们可以发现，如果n & n-1是0，
                         //那么n就是2的K次方，反之则不是2的K次方。
{
	int m = n - 1;
	if ((m&n) == 0)
	{
		printf("是2的K次方！\n");
	}
	else
		printf("不是2的K次方！\n");
}
int main()
{
	CheckIsNumber(8);
	CheckIsNumber(7);
	CheckIsNumber(6);
	CheckIsNumber(99);
	system("pause");
	return 0;
}
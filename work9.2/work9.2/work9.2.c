#include<stdio.h>
//此题要用 & ^  来进行计算平均值。左移1位<<相当于乘2,右移1位>>相当于除2；
int main()
{
	int a = 10;
	int b = 20;
	int avg = 0;
	avg = (a&b) + (a^b)>>1;
	printf("%d", avg);
	system("pause");
	return 0;
}
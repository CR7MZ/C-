#include<stdio.h>
//ตÝน้
int DigitSum(int n)
{
	int m;
	if (n <= 9)
	{
		return n;
	}
	m = n % 10;
	return m + DigitSum(n / 10);
}
int main()
{
	int res = DigitSum(15955);
	printf("%d\n", res);
	system("pause");
	return 0;
}
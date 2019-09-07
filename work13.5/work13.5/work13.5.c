#define _crt_secure_no_warnings
#include<stdio.h>

int  compute(unsigned int ra)
{
	int count=0;
	for (int i = 0; i < 32; i++)
	{
		if (((ra >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	unsigned int a = 14;
	int set = compute(7);
	printf("%d\n", set);
	system("pause");
	return 0;
}
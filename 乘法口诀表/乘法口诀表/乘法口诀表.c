#define _CRT_SECURT_NO_WARNING 1
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 9; i++){
		int j;
		for (j = 1; j <= i; j++){
			printf("%d*%d=%d", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//the other
int pim(int n)
{
	int i;
	for (i = 1; i <= n; i++){
		printf("%d*%d=%2d  ", n, i, n*i);
	}

}
void spl()
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		pim(i);
		printf("\n");
	}

}
void main()
{
	spl();
	system("pause");
}




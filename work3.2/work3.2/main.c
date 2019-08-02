//***¼ÆËã1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ¡­¡­ + 1 / 99 - 1 / 100 µÄÖµ¡£
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int i;
	float sum = 0, sum1 = 0, sum2 = 0;
	for (i = 1; i <= 99; i += 2){
		sum1 += 1.0 / i;
	}
	for (i = 2; i <= 100; i += 2){
		sum2 -= 1.0 / i;
	}
	sum = sum1 + sum2;
	printf("%f", sum);
	system("pause");
	return 0;

}
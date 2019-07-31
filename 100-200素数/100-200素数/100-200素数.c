#define _CRT_SECURT_NO_WARNING 1
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0){
				break;
			}
		}
		if (i == j){
			printf(" %d", i);
				count++;
		}
	}
	printf("\n一共有：%d个素数\n", count);
	system("pause");
	return count;
}


//the other
int prime(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
		return 1;
	}
}
void dlpl()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i))
		{
			printf("%5d", i);
		}
	}
}
void main()
{

	dlpl();
	system("pause");
}
// *******为什么要用sqrt?
//质数的定义为，除了1和本身，没有其它因子，即没有其它数可以被其整除。
//对于任意的数n，因子肯定是比n小的数，所以如果m>n，那么m不可能是n的因子。
//于是最直观的判断方法就是，从1一直到n计算模除，获取到因子总数，如果总数为2，那么就是质数。
//这样对于任意的n，判断质数就需要做n次模除。为了使程序优化，可以修改为，对2到n - 1做模除，只要有一个可以整除，那么就不是整数。
//对于这样的算法，可以再次优化。
//如果n有一个引子m， 那么可以写作n = m*k的形式，那么m和k不可能同时大于n的平方根s。
//这一点可以用反证法来证明。
//如果m>s 且k>s
//那么m*k > s*s
//于是得到n>n的结论。明显是错误的。
//于是m和k至少有一个是小于等于s的。
//这样在判断质数时，只需要从2一直到s做模除，就可以准确的判断是否有其它因子，从而得到是否为质数的结论。
//这就是为什么在判断质数中的程序中会用到求平方根的原因。其本质原因是为了减少模除次数，提高效率。
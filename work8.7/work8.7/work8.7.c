#include<stdio.h>
#include<string.h>
void*My_memmove(void * dest, const void * src, int count)
{
	void* ret = dest;
	if (dest < src)//当dest < src不存在内存重叠，直接拷贝。
	{
		while (count--)
		{
			*((char*)dest) = *((char*)src);
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else//当dest>src存在内存重叠，需要从后往前拷贝。
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	My_memmove(arr + 2, arr, 12);
	My_memmove(arr, arr + 2, 12);
	system("pause");
	return 0;
}
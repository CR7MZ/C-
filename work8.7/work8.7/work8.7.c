#include<stdio.h>
#include<string.h>
void*My_memmove(void * dest, const void * src, int count)
{
	void* ret = dest;
	if (dest < src)//��dest < src�������ڴ��ص���ֱ�ӿ�����
	{
		while (count--)
		{
			*((char*)dest) = *((char*)src);
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else//��dest>src�����ڴ��ص�����Ҫ�Ӻ���ǰ������
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
#include<stdio.h>
#include<string.h>
#include<assert.h>
void*My_memcpy(void*des,const void *src,size_t count)
{ 
	assert(des != NULL);
	assert(src != NULL);
	char*p = (char*)des+(count-1);//ָ��ǿתΪchar*�ͣ�����Ƶ����һ��Ԫ�ء�
	const char*p1 = (char*)src + (count - 1);//ָ��ǿתΪchar*�ͣ�����Ƶ����һ��Ԫ�ء�
	while (count--)
	{
		*p = *p1;//�Ӻ���ǰ������
		--p;
		--p1;
	}
	return des;
}
int main()
{
	char arr1[64] = { 0 };
	char *arr2 = "welcome";
	My_memcpy(arr1, arr2, 4);
	printf("%s", arr1);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<assert.h>
void Mystrcat(char* des, const char* src) {
	assert(src != NULL);
	while (*des != '\0') {
		des++;//�ҵ�Ŀ���ַ�����'\0',�����￪ʼƴ��
	}
	while (*des++ = *src++) {//��Դ�ַ�����ֵ��Ŀ���ļ�,Ȼ��ָ�������
		;//��ʼƴ��
	}
	*des = '\0';//��Ŀ���ļ���ĩβ��ֵ'\0'
}
int main() {
	char array[64] = "i am ";
	char array2[] = " CR7";
	Mystrcat(array, array2);
	printf("%s\n", array);
	system("pause");
	return 0;
}

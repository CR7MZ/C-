#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
const char* Mystrstr(const char* des, const char* str) {//const����ָ��ָ�����ݲ��ܱ��ı�
	assert(des != NULL);
	assert(str != NULL);//����,���Ŀ���ļ���Դ�ļ�ΪNULLֱ�ӳ������
	const char* red = des;
	const char* blk = str;
	while (*red) {
		const char* tmp = red;//����һ����ʱ���������Ѿ���⵽��λ��
		while (*blk == *tmp) {
			blk++;
			tmp++;
		}
		if (*blk == '\0') {//�����ɫָ��ָ��'\0'���Ѿ��ҵ�Ҫ���� ���ַ���
			return red;//���ҿ�ʼʱ��ָ��
		}
		blk = str;//�ú�ɫָ�뻹ԭ����Ԫ��λ��
		red++;//��ʼ����һ��Ԫ�ز���
	}
	return NULL;
}
int main() {
	char buf[] = "hellohello";
	char str[] = "he";
	const char*ret = Mystrstr(buf, str);
	printf("%s\n", ret);
	system("pause");
	return 0;
}

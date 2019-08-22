#include<stdio.h>
#include<assert.h>
void Mystrcat(char* des, const char* src) {
	assert(src != NULL);
	while (*des != '\0') {
		des++;//找到目标字符串的'\0',从这里开始拼接
	}
	while (*des++ = *src++) {//把源字符串赋值给目标文件,然后指针向后移
		;//开始拼接
	}
	*des = '\0';//在目标文件的末尾赋值'\0'
}
int main() {
	char array[64] = "i am ";
	char array2[] = " CR7";
	Mystrcat(array, array2);
	printf("%s\n", array);
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
const char* Mystrstr(const char* des, const char* str) {//const修饰指针指向内容不能被改变
	assert(des != NULL);
	assert(str != NULL);//断言,如果目标文件和源文件为NULL直接程序崩溃
	const char* red = des;
	const char* blk = str;
	while (*red) {
		const char* tmp = red;//定义一个临时变量保存已经检测到的位置
		while (*blk == *tmp) {
			blk++;
			tmp++;
		}
		if (*blk == '\0') {//如果黑色指针指向'\0'即已经找到要查找 的字符串
			return red;//查找开始时的指针
		}
		blk = str;//让黑色指针还原到首元素位置
		red++;//开始从下一个元素查找
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

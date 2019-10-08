#ifndef _CONTACT_H_
#define _CONTACT_H_
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<vld.h>
enum MyEnum//对于枚举来说，如果没有指定元素等于几，则默认从零开始
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	SHOW,
	CLEAR,
	SORT,
	DESTORY,
};
#define MAX_NAME 10
#define MAX_GENTLE 5
#define MAX_TELE 11
#define MAX_ADDR 20
#define MAX_CAPACITY 2
typedef struct PersonInfo
{
	char name[MAX_NAME];
	short age;
	char gentle[MAX_GENTLE];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PersonInfo;
typedef struct Contact         
{
	PersonInfo* str;
	int size;
	int capacity;
}Contact;
void Init(Contact* con);
void Add(Contact* con);//添加
void Show(Contact* con);//表示
void clear(Contact* con);//清空
void del(Contact* con);//删除
void destory(Contact* con);//摧毁（释放内存，防止内存泄露）
int findalone(Contact* con);//找出一个人的信息
#endif /*_CONTACT_H_*/
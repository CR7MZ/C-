#ifndef _CONTACT_H_
#define _CONTACT_H_
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<vld.h>
enum MyEnum//����ö����˵�����û��ָ��Ԫ�ص��ڼ�����Ĭ�ϴ��㿪ʼ
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
void Add(Contact* con);//���
void Show(Contact* con);//��ʾ
void clear(Contact* con);//���
void del(Contact* con);//ɾ��
void destory(Contact* con);//�ݻ٣��ͷ��ڴ棬��ֹ�ڴ�й¶��
int findalone(Contact* con);//�ҳ�һ���˵���Ϣ
#endif /*_CONTACT_H_*/
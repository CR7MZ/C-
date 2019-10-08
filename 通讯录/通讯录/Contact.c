#include"Contact.h"
void menu()
{
	printf("*****0.exit**********1.add***********\n");
	printf("*****2.del***********3.search********\n");
	printf("*****4.show**********5.clear*********\n");
	printf("*****6.sort**********7.destory*******\n");
}
void Init(Contact* con)
{
	con->size = 0;
	con->capacity = MAX_CAPACITY;
	con->str = (PersonInfo*)malloc(sizeof(PersonInfo)*con->capacity);
	assert(con->str!=NULL);
}
int IsFull(Contact* con)
{
	if (con->size == con->capacity)
	{
		PersonInfo* ptr = NULL;
		ptr = (PersonInfo*)realloc(con->str, sizeof(PersonInfo)*con->capacity * 2);
		if (ptr != NULL)
		{
			con->str = ptr;
			con->capacity *= 2;
			printf("扩容成功");
			return 1;
		}
		else
			return 0;
	}
	return 1;
}
int findalone(Contact* con)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入你想查找的名字：");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (strcmp(con->str[i].name, name) == 0)
		{
			printf("%-10s %-5s %-5d %-11s %-20s\n", con->str[i].name, con->str[i].gentle,
				con->str[i].age, con->str[i].tele, con->str[i].addr);
			return 0;
		}	
	}
		printf("找不到\n");
}
int search(Contact* con)
{
	char name[MAX_NAME] = { 0 };
	if (con->size == 0)
	{
		printf("通讯录为空\n");
		return -2;
	}
	printf("请输入你要删除的名字：");
	scanf("%s", name);
	for (int i = 0; i < con->size; i++)
	{
		if (strcmp(con->str[i].name, name)==0)
			return i;
	}
	return -1;
}
void del(Contact* con)
{
	int index = search(con);
	if (index == -1)
	{
		printf("查不到\n");
		return;
	}
	for (int i = index; i < con->size - 1; i++)
	{
		con->str[i] = con->str[i + 1];
	}
	con->size--;
	printf("删除成功\n");
}
void clear(Contact* con)
{
	con->size = 0;
}
void Add(Contact* con)
{
	if (IsFull(con) != 1)
	{
		printf("扩容失败");
		return;
	}
	printf("请输入姓名：");
	scanf("%s", con->str[con->size].name);
	printf("请输入年龄：");
	scanf("%d", &con->str[con->size].age);
	printf("请输入电话：");
	scanf("%s", con->str[con->size].tele);
	printf("请输入性别：");
	scanf("%s", con->str[con->size].gentle);
	printf("请输入住址：");
	scanf("%s", con->str[con->size].addr);
	con->size++;
	printf("添加成功！\n");
}
void Show(Contact* con)
{
	printf("%-10s %-5s %-5s %-11s %-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (int i = 0; i < con->size; i++)
	{
		printf("%-10s %-5s %-5d %-11s %-20s\n", con->str[i].name, con->str[i].gentle,
			con->str[i].age, con->str[i].tele, con->str[i].addr);
	}
}
void destory(Contact* con)
{
	free(con->str);
	con->str = NULL;
	con->size = 0;
	con->capacity = 0;
}
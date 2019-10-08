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
			printf("���ݳɹ�");
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
	printf("������������ҵ����֣�");
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
		printf("�Ҳ���\n");
}
int search(Contact* con)
{
	char name[MAX_NAME] = { 0 };
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return -2;
	}
	printf("��������Ҫɾ�������֣�");
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
		printf("�鲻��\n");
		return;
	}
	for (int i = index; i < con->size - 1; i++)
	{
		con->str[i] = con->str[i + 1];
	}
	con->size--;
	printf("ɾ���ɹ�\n");
}
void clear(Contact* con)
{
	con->size = 0;
}
void Add(Contact* con)
{
	if (IsFull(con) != 1)
	{
		printf("����ʧ��");
		return;
	}
	printf("������������");
	scanf("%s", con->str[con->size].name);
	printf("���������䣺");
	scanf("%d", &con->str[con->size].age);
	printf("������绰��");
	scanf("%s", con->str[con->size].tele);
	printf("�������Ա�");
	scanf("%s", con->str[con->size].gentle);
	printf("������סַ��");
	scanf("%s", con->str[con->size].addr);
	con->size++;
	printf("��ӳɹ���\n");
}
void Show(Contact* con)
{
	printf("%-10s %-5s %-5s %-11s %-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
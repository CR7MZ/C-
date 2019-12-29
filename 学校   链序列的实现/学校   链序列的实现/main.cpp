#include<iostream>
using namespace std;
typedef struct
{
	char name[20];
	char gentel;
}Person;
typedef struct QNode{
	Person data;
	QNode *next;
    QNode* fronter; //队头指针
	QNode* rear;  //队尾指针
} QNode;
void InitialQueue(QNode*& q)
{
	q = new QNode;
	q->next = nullptr;
	q->fronter = nullptr;
	q->rear = q;
}
void EnQueue(QNode*& q, QNode*& m)
{
	int n = 0;
	cout << "舞者的数量为：" << endl;
	cin >> n;
	while (n>0)
	{
		QNode* cur = new QNode;
		cout << "输入舞者姓名" << endl;
		cin >> cur->data.name;
		cout << "输入舞者性别" << endl;
		cin >> cur->data.gentel;
		if (cur->data.gentel == 'f')
		{
			if (q->fronter == nullptr)
				q->fronter = cur;
			q->rear->next = cur;
			q->rear = cur;
		}
		else if (cur->data.gentel == 'm')
		{
			if (m->fronter == nullptr)
			{
				m->fronter = cur;
				m->rear->next = cur;
				m->rear = cur;
			}

		}	
		n--;
	}
}
void DeQueue(QNode*& q)
{
	q->next = q->fronter->next;
	delete q->fronter;
	q->fronter = q->next;
}
void GetHead(QNode*& q)
{
	cout <<"姓名"<< q->fronter->data.name <<"性别"<< q->fronter->data.gentel << endl;
}
bool QueueEmpty(QNode*& q)
{
	if (q->next==nullptr)
		return true;
	return false;
}
void DancersPartner(QNode*& f, QNode*& m)
{
	cout << "男女配对的信息为：" << endl;
	while ((f->next) && (m->next))
	{
		cout << f->fronter->data.name << " " << f->fronter->data.gentel << endl;
		DeQueue(f);
		cout << m->fronter->data.name << " " << m->fronter->data.gentel << endl;
		DeQueue(m);
	}
	if (!QueueEmpty(f))
	{
		cout << "女队剩余的人为：" << endl;
		while ((!QueueEmpty(f)))
		{
			 cout<< f->fronter->data.name << " " << f->fronter->data.gentel << endl;
			 DeQueue(f);
		}
	}
	else if (!QueueEmpty(m))
	{
		cout << "男队剩余的人为：" << endl;
		while ((!QueueEmpty(m)))
		{
			cout << m->fronter->data.name << " " << m->fronter->data.gentel << endl;
			DeQueue(m);
		}
	}
}
int main()
{
	QNode* FQueue;
	QNode* MQueue;
	InitialQueue(FQueue);
	InitialQueue(MQueue);
	EnQueue(FQueue, MQueue);
	if (QueueEmpty(FQueue))
		cout << "女队为空" << endl;
	else if (QueueEmpty(MQueue))
		cout << "男队为空" << endl;
	DancersPartner(FQueue, MQueue);


	system("puase");
	return 0;
}
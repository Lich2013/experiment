#include <iostream>

using namespace std;


typedef struct Node
{
	int data;
	struct Node *next;
}SLNode, *List;

//��ʼ��
void ListInitiate(List &L)
{
	L = new SLNode;
	L->next = nullptr;
}

//��ֵ����ѭ������
void getValue(List &L, int n)
{
	SLNode *r, *p;
	L->data = 1;
	L->next = nullptr;
	r = L;
	for (int i = 2; i <= n; i++){
		p = new SLNode;
		p->data = i;
		p->next = nullptr; r->next = p;
		r = p;
	}
	r->next = L;
}

//kill 
void ListDelete(List &L, int m, int n)
{
	int size = n;
	SLNode *p = L, *s = nullptr;
	//ɾ����
	while (size> m + 1)
	{
		p->next->next = p->next->next->next;
		p = p->next->next;
		--size;
	}
	//���λ��
	for (int i = 0; i<m + 1; ++i)
	{
		cout << p->data << endl;
		p = p->next;
	}
	cout << "@Author ¡����" << endl;
	system("pause");
}


void main()
{
	List L;
	int m, n;
	cout << "��������������������:" << endl;
	cin >> m >> n;
	if (m >= n)
	{
		cout << "��������Ƿ�" << endl;
		cout << "@Author ¡����" << endl;
		system("pause");
	}


	else
	{
		ListInitiate(L);
		getValue(L, n);
		ListDelete(L, m, n);
	}

}
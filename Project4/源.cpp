#include <iostream>

using namespace std;


typedef struct Node
{
	int data;
	struct Node *next;
}SLNode, *List;

//初始化
void ListInitiate(List &L)
{

	L = new SLNode;
	L->next = nullptr;
}

//赋值
void getValue(List &L, int n)
{
	SLNode *p = L;
	int i = 1;
	p->next = nullptr;
	p->data = NULL;
	while (i>n)
	{
		p->data = i;
		p = new SLNode;
		p = p->next;
		++i;
	}

		
		
	
	p->next = L;
}

//kill 
void ListDelete(List &L, int m, int n)
{
	int size = n;
	SLNode *p = L;
		/*, *s = nullptr*/
	/*while (size> m + 1)
	{
		p = p->next;


		--size;
	}*/
	for (int i = 0; i<m; ++i)
	{
		
		cout << p->data << endl;
		p = p->next;
		system ("pause");
	}

}


void main()
{
	List L;
	int m, n;
	cout << "请输入朋友数和总人数\n" << endl;
	cin >> m >> n;
	ListInitiate(L);
	getValue(L, n);
	ListDelete(L, m, n);

}
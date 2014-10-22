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

//赋值构造循环链表
void getValue(List &L, int n)
{

	SLNode *r, *p;
	
	L->data = 1;
	L->next = NULL;
	r = L;										
	for (int i = 2; i<=n; i++){
		p = new SLNode;							
		p->data = i;							
		p->next = NULL; r->next = p;					
		r = p;									
	}
	r->next = L;
	 
	//cout << &L <<"  "<< r->next<<endl;
	//system("pause");
}

//kill 
void ListDelete(List &L, int m, int n)
{
	int size = n;
	SLNode *p = L, *s = nullptr;
	while (size> m + 1)
	{
		p = p->next;


		--size;
	}
	for (int i = 0; i<m; ++i)
	{
		
		cout << p->data << endl;
		p = p->next;
		
	}
	system("pause");
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
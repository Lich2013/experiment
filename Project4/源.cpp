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
}

//kill 
void ListDelete(List &L, int m, int n)
{
	int size = n;
	SLNode *p = L, *s = nullptr;
	//删除人
	while (size> m + 1)
	{
		p->next->next = p->next->next->next;
		p = p->next->next;
		--size;
	}
	//输出位置
	for (int i = 0; i<m+1; ++i)
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
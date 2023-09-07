#include "Executive.h"
#include "SalesManager.h"
#include "SalesPeople.h"
#include "Person.h"

typedef struct LNode 
{
	Person* data;
	LNode* next;
}*Link, * Position;

struct LinkList
{
	Link head, tail;
	int len; 
};

int GetElem(LinkList L, int i, Person* e) 
{                                         
	int j = 1;                            
	LNode* p = L.head->next;              
	while (p && j < i)                    
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
		return 0;
	e = p->data; 
	return 1;
}
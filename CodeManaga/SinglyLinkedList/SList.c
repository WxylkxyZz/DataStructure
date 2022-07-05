#include "SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
}
void SListPushBack(SLTNode** phead, ElemType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	if (*phead == NULL)  // **phead 是 *phead的地址 而我们就是改变 *phead的值
	{
		*phead = newnode;
	}
	else
	{
		// 找到尾节点
		SLTNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
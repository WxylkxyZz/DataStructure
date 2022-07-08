#include "SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuyListNode(ElemType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc failed;\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SLTNode** phead, ElemType x)
{
	assert(phead);
	SLTNode* newnode = BuyListNode(x);
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

void SListPushFront(SLTNode** phead, ElemType x)
{
	SLTNode* newnode = BuyListNode(x);
	newnode->next = (*phead);
	(*phead) = newnode;
}


void SListPopBack(SLTNode** phead)
{
	assert(*phead != NULL);
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SLTNode* tail = (*phead);
		SLTNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}

void SListPopFront(SLTNode** phead)
{
	assert(*phead);
	SLTNode *next = (*phead)->next;
	free(phead);
	phead = NULL;
	// 头删 就不用考虑 只有一个节点的情况 具有通用性
}

SLTNode* SListFind(SLTNode* phead, ElemType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInset(SLTNode** phead, SLTNode* pos, ElemType x)
{
	SLTNode* newnode = BuyListNode(x);
	if (*phead == pos)
	{
		*phead = newnode;
		newnode->next = pos;
	}
	else
	{
		// 找pos 前面一个位置 (缺陷)
		SLTNode* posPrev = *phead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

void SListInsetAfter(SLTNode* pos, ElemType x)
{
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListErase(SLTNode** phead, SLTNode* pos)
{
	assert(phead);
	assert(pos);
	if (*phead == pos)
	{
		*phead = pos->next;
		free(pos);
	}
	else
	{
		SLTNode* prev = *phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

void SListEraseAfter(SLTNode* pos)
{
	assert(pos->next);
	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

void SListDestroy(SLTNode** phead)
{
	assert(phead);
	SLTNode* cur = *phead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*phead = NULL;
}



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
	SLTNode* newnode = BuyListNode(x);
	if (*phead == NULL)  // **phead �� *phead�ĵ�ַ �����Ǿ��Ǹı� *phead��ֵ
	{
		*phead = newnode;
	}
	else
	{
		// �ҵ�β�ڵ�
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
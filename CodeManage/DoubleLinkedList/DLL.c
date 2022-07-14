#include "DLL.h"

DLLNode* ListInit()
{
	// �ڱ�λͷ�ڵ�
	DLLNode* phead = (DLLNode*)malloc(sizeof(DLLNode));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}


void ListPrint(DLLNode* phead)
{
	assert(phead);
	DLLNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");

}


DLLNode* BuyListNode(ElemType x)
{
	DLLNode* newnode = (DLLNode*)malloc(sizeof(DLLNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


void ListPushBack(DLLNode* phead, ElemType x)
{
	assert(phead);
	DLLNode* tail = phead->prev;  // ��Ϊ��ѭ���� phead->prev����β
	DLLNode* newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
	// �����Ƿ���Ҫ���ǿ��������� ---> ����Ҫ
}


void ListPopBack(DLLNode* phead)
{
	assert(phead);
	assert(phead != phead->next);

	DLLNode* tail = phead->prev;
	DLLNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
}


void ListPushFront(DLLNode* phead, ElemType x)
{
	assert(phead);
	DLLNode* newnode = BuyListNode(x);
	DLLNode* second = phead->next;
	newnode->prev = phead;
	newnode->next = second;
	phead->next = newnode;
	second->prev = newnode;
}


void ListPopFront(DLLNode* phead)
{
	assert(phead);
	assert(phead != phead->next);

	DLLNode* second = phead->next;
	DLLNode* third = second->next;

	phead->next = third;
	third->prev = phead;
	free(second);
	// mad�����һ�free��third�ڵ� !!!     �Ұ���bug ע�ⲻ��free��third�ڵ� ��������
}

DLLNode* ListFind(DLLNode* phead, ElemType x)
{
	assert(phead);
	DLLNode* cur = phead->next;
	while (cur != phead->prev)
	{
		ElemType y = cur->data;
		if (x == y)
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



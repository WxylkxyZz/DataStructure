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
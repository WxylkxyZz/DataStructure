#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct SListNone
{
	ElemType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
SLTNode* BuyListNode(ElemType x);
void SListPushBack(SLTNode** phead, ElemType x);
void SListPushFront(SLTNode** phead, ElemType x);
void SListPopBack(SLTNode** phead);
void SListPopFront(SLTNode** phead);
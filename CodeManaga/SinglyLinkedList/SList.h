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
void SListPushBack(SLTNode** phead, ElemType x);
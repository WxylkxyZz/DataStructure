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
SLTNode* SListFind(SLTNode* phead, ElemType x);  // 按值查找
void SListInset(SLTNode** phead, SLTNode* pos, ElemType x); // 从pos位置前插入 (单链表不适合这样 - 缺陷)
void SListInsetAfter(SLTNode* pos, ElemType x); // 从pos位置后插入
void SListErase(SLTNode** phead, SLTNode* pos);
void SListEraseAfter(SLTNode* pos);
void SListDestroy(SLTNode** phead);

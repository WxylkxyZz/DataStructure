#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


typedef int ElemType;

typedef struct
{
	ElemType* data; // ָ��̬��������� ָ��
	int MaxSize, length; // ������� , ��ǰ����
}SeqList;                       //  ˳�������Ͷ���

/*
�������� : �β���ʵ�εĿ��� �βεĸı䲻��Ӱ��ʵ�� ����Ҫ��ָ��
malloc��������һ��ָ��	��Ҫǿ��ת�� Ϊ�� ���������Ԫ������ ָ��

*/
void InitList(SeqList* L);
void SqListPrint(SeqList* L);
void SqListDestory(SeqList* L);
void SqListCheckCapacity(SeqList* L);
void SqListPushBack(SeqList* L, ElemType x);
void SqListPopBack(SeqList* L);
void SqListPushFront(SeqList* L, ElemType x);
void SqListPopFront(SeqList* L);

// 2.2.2����˳����ʵ��
void SqListInsert(SeqList* L, int pos, ElemType x); // ��ĳ��λ�ò���
int SqListDelete(SeqList* L, int pos); // ɾ��ĳ��λ�� ����ɾ��ֵ
int SqListFind(SeqList* L, ElemType x); // ����ĳ��Ԫ��



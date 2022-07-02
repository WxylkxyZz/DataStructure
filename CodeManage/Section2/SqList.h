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
void SqListPushBack(SeqList* L, ElemType x);
void SqListPopBack(SeqList* L);


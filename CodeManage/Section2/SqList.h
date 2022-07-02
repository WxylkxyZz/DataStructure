#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


typedef int ElemType;

typedef struct
{
	ElemType* data; // 指向动态分配数组的 指针
	int MaxSize, length; // 最大容量 , 当前长度
}SeqList;                       //  顺序表的类型定义

/*
函数传参 : 形参是实参的拷贝 形参的改变不会影响实参 所以要传指针
malloc函数返回一个指针	需要强制转型 为你 定义的数据元素类型 指针

*/
void InitList(SeqList* L);
void SqListPrint(SeqList* L);
void SqListDestory(SeqList* L);
void SqListPushBack(SeqList* L, ElemType x);
void SqListPopBack(SeqList* L);


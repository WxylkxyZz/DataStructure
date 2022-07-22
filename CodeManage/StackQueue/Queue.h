#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Elemtype;

typedef struct QueueNode
{
	struct QueueNode* next;
	Elemtype val;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq, Elemtype x);
void QueuePop(Queue* pq);
Elemtype QueueFront(Queue* pq);
Elemtype QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
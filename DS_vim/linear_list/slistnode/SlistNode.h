#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;
typedef struct SlistNode
{
  DataType val;
  struct SlistNode* next;
   
}SlNode;

void SlistNodeprint(SlNode* head);//打印
void SlistNodePushBack(SlNode** phead,DataType x);//尾插

void SlistNodePopBack(SlNode** phead);//尾删
void SlistNodePushHead(SlNode** phead,DataType x);//头插
void SlistNodePopHead(SlNode** phead);//头删除
SlNode*  SlistNodeFind(SlNode* head,DataType x);//查找元素x
void SlistNodeInsert(SlNode** phead,DataType pos,DataType x);//任意位置插入
void SlistNodeRemove(SlNode** phead,DataType x);//删除元素任意

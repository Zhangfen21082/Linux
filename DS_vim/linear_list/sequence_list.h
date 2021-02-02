#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 10;定长数组
typedef int DataType;

typedef struct Seqlist 
{
  DataType* _arr;
  int _capacity;
  int _length;
  
}Seqlist;
void  SeqlistInit(Seqlist* ps);//初始化
void SeqlistDestory(Seqlist* ps);//销毁
void SeqlistExpand(Seqlist* ps);//扩容
void Seqlistprint(Seqlist* ps);//打印
void SeqlistPushBack(Seqlist* ps,DataType x);//尾插
void SeqlistPopBack(Seqlist* ps);//尾删
void SeqlistPushHead(Seqlist* ps,DataType x);//头插
void SeqlistPopHead(Seqlist* ps);//头删
void SeqlistInsert(Seqlist* ps,int pos,DataType x);//任意位置插入
void SeqlistRemove(Seqlist* ps,int pos);//任意位置删除

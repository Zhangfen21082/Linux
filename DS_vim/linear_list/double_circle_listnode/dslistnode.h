#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct dcslistnode
{
  DataType val;
  struct dcslistnode* next;
  struct dcslistnode* prev;

}dcnode;

dcnode* creat(DataType x);//申请结点
void print(dcnode* pd);//打印
void listnodePushBack(dcnode* pd,DataType x);//尾插
void listnodePopBack(dcnode* pd);//尾删
void listnodePushHead(dcnode* pd,DataType x);//头插
void listnodePopHead(dcnode* pd);

dcnode* find(dcnode* pd,DataType x);//寻找元素
void listnodeInsert(dcnode* pd,DataType pos,DataType x);//任意位置插入
void listnodeRemove(dcnode* pd,DataType pos);//任意位置删除

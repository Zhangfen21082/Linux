#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int DataType;

typedef struct Heap//堆结构体定义
{
    DataType* _arr;
    int _length;
    int _capaity;
}Heap;

void print(Heap* ph,int n);//打印
void HeapInit(Heap* ph,DataType* arr,int n);//初始化
void AdjusDown(Heap* ph,int n,int root);//堆的向下调整
void AdjustUp(Heap* ph,int child);//堆的向上调整
void HeapCreat(Heap* ph,int n);//构造堆
void HeapSort(Heap* ph);//堆排序
void HeapPush(Heap* ph,DataType x);//插入元素
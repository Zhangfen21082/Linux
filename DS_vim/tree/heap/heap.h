#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int DataType;

typedef struct Heap//�ѽṹ�嶨��
{
    DataType* _arr;
    int _length;
    int _capaity;
}Heap;

void print(Heap* ph,int n);//��ӡ
void HeapInit(Heap* ph,DataType* arr,int n);//��ʼ��
void AdjusDown(Heap* ph,int n,int root);//�ѵ����µ���
void AdjustUp(Heap* ph,int child);//�ѵ����ϵ���
void HeapCreat(Heap* ph,int n);//�����
void HeapSort(Heap* ph);//������
void HeapPush(Heap* ph,DataType x);//����Ԫ��
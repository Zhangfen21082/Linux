#include "heap.h"

void swap(DataType* x,DataType* y)//交换
{
    DataType temp=*x;
    *x=*y;
    *y=temp;
}

void print(Heap* ph,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d ",ph->_arr[i]);
    }
    printf("\n");

}

void HeapInit(Heap* ph,DataType* arr,int n)
{
    assert(ph);
    ph->_arr=(DataType*)malloc(sizeof(DataType)*n);
    memcpy(ph->_arr,arr,sizeof(DataType)*n);
    ph->_length=n;
    ph->_capaity=n;
}

void AdjusDown(Heap* ph,int n,int root)
{
    int parent=root;
    int child=2*parent+1;//左孩子
    while(child<n)
    {
        if(child+1<n&&ph->_arr[child+1]>ph->_arr[child])
        {
            child++;//表明右孩子小一点
        }
        if(ph->_arr[child]>ph->_arr[parent])
        {
            swap(&ph->_arr[child],&ph->_arr[parent]);
            parent=child;
            child=2*parent+1;
        }
        else
        {
            break;
        }
    }
}
void AdjustUp(Heap* ph,int child)
{
    int parent=(child-1)/2;
    while(child>0)
    {
        if(ph->_arr[child]>ph->_arr[parent])
        {
            swap(&ph->_arr[child],&ph->_arr[parent]);
            child=parent;
            parent=(child-1)/2;
        }
        else
            break;
    }

}

void HeapCreat(Heap* ph,int n)
{
    assert(ph);
    int i=0;
    for(i=n/2-1;i>=0;--i)
    {
        AdjusDown(ph,n,i);//对每一个结点进行向下调整
    }

}
void HeapSort(Heap* ph)
{
    assert(ph);
    int i=0;
    for(i=ph->_length-1;i>0;--i)
    {
        swap(&ph->_arr[0],&ph->_arr[i]);
        AdjusDown(ph,i,0);
    }

}
void HeapPush(Heap* ph,DataType x)
{   
    assert(ph);
    if(ph->_length==ph->_capaity)
    {
        ph->_capaity*=2;
        DataType* temp=(DataType*)realloc(ph->_arr,sizeof(DataType)*ph->_capaity);
        ph->_arr=temp;

    }
    ph->_arr[ph->_length]=x;
    ph->_length++;
    AdjustUp(ph,ph->_length-1);

}
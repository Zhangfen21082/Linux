#include "heap.h"

void test()
{
    int a[]={27,15,19,18,28,34,65,49,25,37};
    Heap heap;
    HeapInit(&heap,a,sizeof(a)/sizeof(DataType));
    printf("原数组为:");
    print(&heap,heap._length);

    // printf("小顶堆为:");
    // AdjusDown(&heap,heap._length,0);
    // print(&heap,sizeof(a)/sizeof(DataType));

    printf("大顶堆为:");
    HeapCreat(&heap,heap._length);
    print(&heap,heap._length);

    

    printf("插入元素:");
    HeapPush(&heap,97);
    HeapPush(&heap,41);
    print(&heap,heap._length);

    printf("排成升序:");
    HeapSort(&heap);
    print(&heap,heap._length);





}

int main()
{
    test();
}
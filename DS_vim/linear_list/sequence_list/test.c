#include "sequence_list.h"


void test()
{
  Seqlist slist;
  SeqlistInit(&slist);
  printf("插入元素1,2,3\n");
  SeqlistPushBack(&slist,1);
  SeqlistPushBack(&slist,2);
  SeqlistPushBack(&slist,3);
  Seqlistprint(&slist);

  printf("尾删元素3\n");
  SeqlistPopBack(&slist);
  Seqlistprint(&slist);

  printf("头插元素4\n");
  SeqlistPushHead(&slist,4);
  Seqlistprint(&slist);

  printf("头删元素4\n");
  SeqlistPopHead(&slist);
  Seqlistprint(&slist);

  printf("在1的位置插入6\n");
  SeqlistInsert(&slist,1,6);
  Seqlistprint(&slist);

  printf("删除第2个元素\n");
  SeqlistRemove(&slist,2);
  Seqlistprint(&slist);

  SeqlistDestory(&slist);
}

int main()
{
  test();
}

#include "SlistNode.h"

void test()
{
  SlNode* head=NULL;
  SlistNodePushBack(&head,1);
  SlistNodePushBack(&head,2);
  SlistNodePushBack(&head,3);
  SlistNodePushBack(&head,4);
  SlistNodePushBack(&head,5);
  SlistNodePushBack(&head,6);
  SlistNodeprint(head);
  SlistNodePopBack(&head);
  SlistNodeprint(head);
  SlistNodePushHead(&head,4);
  SlistNodeprint(head);
  SlistNodePopHead(&head);
  SlistNodeprint(head);
  SlistNodeInsert(&head,3,9);
  SlistNodeprint(head);
}

int main()
{
  test();
}

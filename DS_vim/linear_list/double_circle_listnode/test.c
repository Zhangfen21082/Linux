#include "dslistnode.h"


void test()
{
 dcnode* head=(dcnode*)malloc(sizeof(dcnode));
 head->next=head;
 head->prev=head;
 printf("尾插4个结点\n");
 listnodePushBack(head,1);
 listnodePushBack(head,2);
 listnodePushBack(head,3);
 listnodePushBack(head,4);
 print(head);
 printf("\n");

 printf("尾删2两个节点\n");
 listnodePopBack(head);
 listnodePopBack(head);
 print(head);
 printf("\n");

 printf("头插4个结点\n");
 listnodePushHead(head,5);
 listnodePushHead(head,6);
 listnodePushHead(head,7);
 listnodePushHead(head,8);
 print(head);
 printf("\n");
}


int main()
{
  test();
}

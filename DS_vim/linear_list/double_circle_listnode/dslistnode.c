#include "dslistnode.h"


dcnode* creat(DataType x)
{
  dcnode* NewNode=(dcnode*)malloc(sizeof(dcnode));
  NewNode->val=x;
  NewNode->next=NULL;
  NewNode->prev=NULL;
  return NewNode;
}
void print(dcnode* pd)
{
  assert(pd);
  dcnode* cur=pd->next;
  while(cur!=pd)
  {
    printf("%d->",cur->val);
    cur=cur->next;
  }
  if(pd->next==pd)
    printf("NULL");

}

void listnodePushBack(dcnode* pd,DataType x)
{
  assert(pd);
  dcnode* NewNode=creat(x);
  dcnode* tail=pd->prev;
  NewNode->prev=tail;
  tail->next=NewNode;
  pd->prev=NewNode;
  NewNode->next=pd;
}

void listnodePopBack(dcnode* pd)
{
  assert(pd);
  if(pd->next==pd)
  {
    printf("error\n");
    exit(-1);
  }
  dcnode* tail=pd->prev;
  pd->prev=tail->prev;
  tail->next=pd;
  free(tail);


}
void listnodePushHead(dcnode* pd,DataType x)
{
  assert(pd);
  dcnode* NewNode=creat(x);
  NewNode->next=pd->next;
  NewNode->prev=pd;
  pd->next->prev=NewNode;
  pd->next=NewNode;

}

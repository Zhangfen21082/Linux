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
  tail->prev->next=pd;
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


void listnodePopHead(dcnode* pd)
{
  assert(pd);
  dcnode* head=pd->next;
  pd->next=head->next;
  head->next->prev=pd;


}


dcnode* find(dcnode* pd,DataType x)
{
  assert(pd);
  dcnode* head=pd->next;
  while(head!=pd)
  {
    if(head->val==x)
      break;
    head=head->next;
  }
  return head;
}

void listnodeInsert(dcnode* pd,DataType pos,DataType x)
{
  assert(pd);
  dcnode* NewNode=creat(x);
  dcnode* front=find(pd,pos);

  NewNode->next=front->next;
  NewNode->prev=front;
  front->next=NewNode;
  NewNode->next->prev=NewNode;

}
void listnodeRemove(dcnode* pd,DataType pos)
{
  assert(pd);
  dcnode*  index=find(pd,pos);
  dcnode* front=index->prev;
  dcnode* behind=index->next;
  front->next=behind;
  behind->prev=front;
  free(index);

}

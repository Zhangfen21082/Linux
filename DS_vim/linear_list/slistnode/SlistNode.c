#include "SlistNode.h"


void SlistNodeprint(SlNode* head)
{
  assert(head);
  if(head!=NULL)
  {
    SlNode* cur=head;
    while(cur!=NULL)
    {
      printf("%d->",cur->val);
      cur=cur->next;
    }
  }
  else 
  {
    printf("NULL");
  }
  printf("\n");
}

void SlistNodePushBack(SlNode** phead,DataType x)
{
 // assert(*(phead));
  SlNode* NewNode=(SlNode*)malloc(sizeof(SlNode));
  NewNode->val=x;
  NewNode->next=NULL;
 if((*phead)==NULL)
 {
   (*phead)=NewNode;
 }
 else 
 {
   SlNode* cur=(*phead);
   while(cur->next!=NULL)
   {
     cur=cur->next;
   }
   cur->next=NewNode;
 }
}

void SlistNodePopBack(SlNode** phead)
{ 
  assert(*phead);
  if(*phead==NULL)
  {
    printf("错误，链表空\n");
    exit(-1);
  }
  if((*phead)->next==NULL)
  {
    (*phead)=NULL;
    exit(0);
  }

  SlNode* pre=NULL;
  SlNode* cur=(*phead);
  while(cur->next) 
  {
    pre=cur;
    cur=cur->next;
  }
  pre->next=cur->next;
  free(cur);



}

void SlistNodePushHead(SlNode** phead,DataType x)
{
  assert(*phead);
  SlNode* NewNode=(SlNode*)malloc(sizeof(SlNode));
  NewNode->val=x;
  NewNode->next=NULL;
  if(*phead==NULL) 
  {
    (*phead)=NULL;
  }
  else 
  {
    NewNode->next=(*phead);
    (*phead)=NewNode;
  }

}


void SlistNodePopHead(SlNode** phead)
{
  assert(*phead);
  if(*phead==NULL)
  {
    printf("错误，链表空\n");
    exit(-1);
  }
  if((*phead)->next==NULL)
  {
    *phead=NULL;
  }
  else 
  {
    SlNode* cur=*phead;
    *phead=cur->next;
    free(cur);
  }
  

}
SlNode* SlistNodeFind(SlNode* head,DataType x)
{
  assert(head);
  SlNode* cur=head;
  if(head==NULL)
  {
    printf("错误，链表为空\n");
    exit(-1);
  }
  else 
  {
    while(cur)
    {
      if(cur->val==x)
        break;
      cur=cur->next;
    }
  }
  return cur;
}

void SlistNodeInsert(SlNode** phead,DataType pos,DataType x)
{
  assert(*phead);
  SlNode* NewNode=(SlNode*)malloc(sizeof(SlNode));
  NewNode->next=NULL;
  NewNode->val=x;
  if(*phead==NULL)
  {
    SlistNodePushHead(phead,x);
  }
  else 
  {
    SlNode* cur=SlistNodeFind((*phead),pos);
    NewNode->next=cur->next;
    cur->next=NewNode;
  }
}
void SlistNodeRemove(SlNode** phead,DataType x)
{
  assert(phead);
  if(*phead==NULL || (*phead)->next==NULL)
  {
    SlistNodePopHead(phead);
  }
  else 
  {
    SlNode* remove=SlistNodeFind((*phead),x);
    SlNode* cur=*phead;
    while(cur!=NULL)
    {
      if(cur->next==remove)
        break;
      cur=cur->next;
    }
    cur->next=remove->next;
    free(remove);

  }

}

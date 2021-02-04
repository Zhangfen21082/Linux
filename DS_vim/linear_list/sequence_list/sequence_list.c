#include "sequence_list.h"

void SeqlistInit(Seqlist* ps)
{
  assert(ps);
  ps->_arr=(DataType*)malloc(sizeof(DataType)*4);
  if(ps->_arr==NULL)
  {
    printf("申请失败\n");
    exit(-1);
  }
  ps->_capacity=4;
  ps->_length=0;
}
void SeqlistDestory(Seqlist* ps)
{
  assert(ps);
  free(ps->_arr);
  ps->_capacity=ps->_length=0;
  ps=NULL;
}

void SeqlistExpand(Seqlist* ps)
{
  assert(ps);
  if(ps->_length==ps->_capacity-1)
  {
    ps->_capacity*=2;
    ps->_arr=(DataType*)realloc(ps->_arr,sizeof(DataType)*ps->_capacity);
  }
  if(ps->_arr==NULL)
  {
    printf("扩容失败\n");
    exit(-1);
  }
}
void Seqlistprint(Seqlist* ps)
{
  assert(ps);
  int i=0;
  for(i=0;i<=ps->_length;i++)
  {
    printf("%d ",ps->_arr[i]);
  }
  printf("\n");
}
void SeqlistPushBack(Seqlist* ps,DataType x)
{
  assert(ps);
  SeqlistExpand(ps);
  ps->_arr[ps->_length]=x;
  ps->_length++;

}
void SeqlistPopBack(Seqlist* ps)
{
  assert(ps);
  if(ps->_capacity==0)
  {
    printf("错误，空的\n");
    exit(-1);
  }
  ps->_length--;

}
void SeqlistPushHead(Seqlist* ps,DataType x)
{
  assert(ps);
  SeqlistExpand(ps);
  int i=0;
  for(i=ps->_length;i>=0;i--)
  {
    ps->_arr[i+1]=ps->_arr[i];
  }
  ps->_arr[0]=x;

}
void SeqlistPopHead(Seqlist* ps)
{
  assert(ps);
  if(ps->_length==0)
  {
    printf("错误，空的\n");
    exit(-1);
  }
  int i=0;
  for(i=0;i<ps->_length;i++)
  {
    ps->_arr[i]=ps->_arr[i+1];
  }
  ps->_length--;

}
void SeqlistInsert(Seqlist* ps,int pos,DataType x)
{
  assert(ps);
  SeqlistExpand(ps);
 int i=0;
 for(i=ps->_length;i>=pos-1;i--)
 {
   ps->_arr[i+1]=ps->_arr[i]; 
 }
 ps->_arr[pos-1]=x;
 ps->_length++;
}
void SeqlistRemove(Seqlist* ps,int pos)
{
  assert(ps);
  if(ps->_length==0)
  {
    printf("错误，空的\n");
    exit(-1);
  }
  int i=pos-1;
  for(i=pos-1;i<ps->_length;i++)
  {
    ps->_arr[i]=ps->_arr[i+1];
  }
  ps->_length--;

}

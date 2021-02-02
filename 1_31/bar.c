
//进度条
#include "bar.h"
void bar()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));

  const char* label="|/-\\";
  int i=0;
  while(i<100)
  {
    fflush(stdout);
    bar[i++]='#';
    usleep(150000);
    printf("[%-100s][%3d%%][%c]\r",bar,i,label[i%4]);
  }
  printf("\n");
}

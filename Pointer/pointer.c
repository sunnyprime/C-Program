#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5,6};

  for(int i=0;i<5;i++)
  {
    printf("%u\n",*(a+i));
  }
}

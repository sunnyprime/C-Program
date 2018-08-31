#include<stdio.h>
void reference(int*);
int main()
{
  int a=10;
  reference(&a);
  printf("Value of a is %d\n",a);
}

void reference(int *a)
{
  *a=*a+10;
}

// Function that call itself is known as Recursion

#include<stdio.h>
int sum(int n);

int main()
{
  printf("Rwec\n" );
  int result;
  result=sum(10);
  printf("Result is:%d\n",result);
}

int sum(int n)
{
  int s;
  if(n!=0)
  {
    s=s+n;
    sum(s);
    n--;   //Sum function call itself
  }
  else
  {
    return s;
  }
}

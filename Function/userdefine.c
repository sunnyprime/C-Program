#include<stdio.h>
int evencheck();
void oddcheck();

int main()

{
  evencheck();
  oddcheck();
}

int evencheck()
{
    int a=10;
    if(a%2==0)
    {
      printf("Even number\n");
    }
    else
    {
      printf("Odd number\n");
    }

}

void oddcheck()
{
  int a=5;
  if(a%2!=0)
  {
    printf("Odd number\n");
  }
  else
  {
    printf("Even number");
  }
}

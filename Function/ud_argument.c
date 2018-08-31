#include<stdio.h>
int addition(int a, int b);
void subtraction(int a,int b);

int main()
{
  addition(5,3);
  subtraction(5,3);
}

void subtraction(int a,int b) {
  printf("subtraction is:%d\n",a-b );
}

int addition(int a,int b)
{
  printf("Addition is:%d\n",a+b);
}

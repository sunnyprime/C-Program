#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);

int main()
{
    int adds;
    int subs;
    adds=add(3,2);
    subs=sub(3,2);
    printf("Addition is:%d\n",adds);
    printf("Subtraction is:%d\n",subs);
}

int add(int a,int b){
  int c;
  c=a+b;
  return c;
}
int sub(int a, int b)
 {
   int c;
   c=a-b;
   return c;
 }

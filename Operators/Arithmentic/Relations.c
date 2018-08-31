#include<stdio.h>
int main()
{
  int a=5,b=5,c=10;
  printf("a==b: %d\n",a==b);    //true  1
  printf("b==c: %d\n",b==c);    //False 0

  printf("a!=b: %d\n",a!=b);    //False 0
  printf("a!=b: %d\n",b!=c );   //True  1

  printf("a>b: %d\n",a>b);  //False`  0
  printf("b>c: %d\n",b>c);  //False   0

  printf("a<b: %d\n",a<b);  //False   0
  printf("b<c: %d\n",b<c);  //True    1

  printf("a<=b: %d\n",a<=b); //True   1
  printf("b<=c: %d\n",a<=c);    //true  1

  printf("a>=b: %d\n",a>=b);  //true    1
  printf("b>=c: %d\n",b>=c);  //False   0
}

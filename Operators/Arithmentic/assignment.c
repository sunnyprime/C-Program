#include<stdio.h>
int main()
{
  int a=10,c;

  c=a;
  printf("c=%d\n",c);

  c+=a;  //c=c+a
  printf("c+=a=%d\n",c);

  c-=a;   //c=c-a
  printf("c-=a=%d\n",c);

  c*=a;
  printf("c*=a=%d\n",c);

  c/=a; //c=c/a;
  printf("c/a=%d\n",c);

  c%=a; //c=c%a
  printf("c =%f \n",c );
}

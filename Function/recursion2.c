#include<stdio.h>

int fact(int);

int main()
{
    int num,result;
    printf("Enter any number\n");
    scanf("%d",&num);
    result=fact(num);
    printf("Factorial is %d\n",result);

}
int fact(int x)
{
  int result;
  if(x==0)
  {
    return 1;
  }
  else{
    result=x*fact(x-1);
  }
}

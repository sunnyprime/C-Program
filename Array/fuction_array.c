#include<stdio.h>
int average(int age[]);
int main()
{
  int age[]={5,6,3,8,9,6,3,4,5};
  int result=average(age);  //For Calling a function simply write variable name:
  printf("Average age:%d\n",result);
}

int average(int age[])
{
  int i,sum=0;
  int avg;
  for(i=0;i<9;i++)
  {
    sum+=age[i];
  }
  avg=(sum/9);
  return avg;
}

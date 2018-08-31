#include<stdio.h>
int num=5;
int check();
int main()
{
  printf("num is inside main function before declaration:%d\n",num); //Global num
  int num=10;
  printf("num is inside main function after declaration:%d\n",num);//Local num
  check();
}

int check()
{
  printf("In check function num is:%d\n",num); //Global
}

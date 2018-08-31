#include<stdio.h>
void swap(int *n1,int *n2);

int main()
{
  int num1=5;
  int num2=10;
  swap(&num1,&num2);//Address is paased by &variable
  printf("Number 1=%d\n",num1);
  printf("Number 2=%d\n",num2);
}

//Pointer n1 and n2 is to the address of num1 and num2 respectively
void swap(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

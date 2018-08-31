#include<stdio.h>
int main()
{
  int array[5];
  for(int i=0;i<5;i++)
  {
    printf("Enter element %d \n",i+1);
    scanf("%d",&array[i]);
  }
  printf("Entered 1d Element\n");
  for(int i=0;i<5;i++)
  {
    printf("%d\t",array[i]);
  }
}

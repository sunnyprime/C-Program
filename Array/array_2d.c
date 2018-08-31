#include<stdio.h>
int main()
{
  int size=3;
  int array[size][size];
  for(int i=0;i<size;i++)
  {
  for(int j=0;j<size;j++)
  {
    printf("Enter element %d %d :\n",i+1,j+1);
    scanf("%d",&array[i][j]);
  }
}
  printf("Entered 2d Element\n");
  for(int i=0;i<size;i++){
  for(int j=0;j<size;j++)
  {
    printf("%d\t",array[i][j]);
  }
  printf("\n");
}
}

#include<stdio.h>
int main()
{
  int size=2;
  int array[size][size][size];
  for(int i=0;i<size;i++)
  {
  for(int j=0;j<size;j++)
  {
  for(int k=0;k<size;k++)
  {
    printf("Enter element [%d] [%d] [%d]:\n",i+1,j+1,k+1);
    scanf("%d",&array[i][j][k]);
  }
}
}
  printf("Entered 3d Element\n");

  for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
  for(int k=0;k<size;k++)
  {
    printf("%d\t",array[i][j][k]);
  }
  printf("\n");
}
  printf("\n\n");
}
}

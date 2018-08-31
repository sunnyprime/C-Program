#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr, size;
  printf("Please enter the size of array\n");
  scanf("%d",&size);
  ptr=(int*)malloc(size*sizeof(int));

  for(int i=0;i<size;i++)
  {
    scanf("%d",ptr+i);
  }
  printf("Entered element is");
  for(int i=0;i<size;i++)
  {
    *(ptr+i)+=1;
    printf("%d\n",*(ptr+i));
  }
  free(ptr);
}

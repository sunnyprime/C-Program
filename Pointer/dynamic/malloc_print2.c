#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr,num;
  printf("Enter the size of elements\n" );
  scanf("%d",&num);
  ptr=(int*)malloc(num*sizeof(int));
  printf("Enter the element\n");
  for(int i=0;i<num;i++)
  {
    scanf("%d",ptr+i);
  }
  for(int i=0;i<num;i++)
  {
    *(ptr+i)+=2;
    printf("%d\n",*(ptr+i) );
  }
  free(ptr);
}

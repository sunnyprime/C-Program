#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr, num;
  printf("Enter the size of array");
  scanf("%d",&num);
  ptr=(int*)calloc(num,sizeof(num));
  if(ptr==NULL)
  {
    printf("Error memory not allocated");
    exit(0);
  }
  for(int i=0;i<num;i++)
  {
    scanf("%d",(ptr+i));
  }
  for(int i=0;i<num;i++)
  {
    *(ptr+i)+=1;
    printf("%d\n",*(ptr+i));
  }
  free(ptr);
}

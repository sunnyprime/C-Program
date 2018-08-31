#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr,num1,num2;
  printf("Enter the size of element\n" );
  scanf("%d",&num1);

  ptr=(int*)malloc(num1*sizeof(int));
  for(int i=0;i<num1;i++)
  {
    scanf("%d",(ptr+i));
  }
  printf("Old elemnet\n" );
  for(int i=0;i<num1;i++)
  {
    printf("%u\n",(ptr+i));
  }
  printf("Enter new element\n" );
  scanf("%d",&num2);
  ptr=realloc(ptr,num2);
  printf("Entered element is\n");
  for(int i=0;i<num2;i++)
  {
    printf("%u\n",ptr+i );
  }


}

#include<stdio.h>
int main()
{
  int a;
  printf("Enter number between 1 to 100:\n" );
  scanf("%d",&a);
  if(a==50)
  {
    printf("The number is 50");
  }
  else if(a>50)
  {
    printf("The number is greater than 50\n");
  }
  else if(a<50)
  {
    printf("The number is less than 50\n");
  }
  else{
    printf("Number is not enterd\n");
  }
}

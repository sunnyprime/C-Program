#include<stdio.h>
int main()
{
  int a;
  printf("Enter number between 1 to 100:\n" );
  scanf("%d",&a);
  if (a<50)
    {
      if (a<25)
      {
        printf("The number is between 1 to 25\n");
      }
      else
      {
        printf("The number is between 25 to 50\n");
      }
    }
  else
  {
    if(a<75)
    {
      printf("The number is between 50 to 75\n" );
    }
    else
    {
      printf("The number is between 75 to 100\n");
    }
  }

}

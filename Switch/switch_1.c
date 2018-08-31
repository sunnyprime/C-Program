#include<stdio.h>
int main()
{
  int a,b,input,C=1;
  printf("Enter Two numbers\n");
  scanf("%d",&a);
  scanf("%d",&b);

  printf("1.Addition\n2.Subtraction\n3.Multpication\n4.Division\n");
  scanf("%d",&input);
  printf("Entered is %d\n",input);

  switch(input)
  {
    case 1:printf("Addition is:%d\n",a+b );
            break;
    case 2:printf("Substraction is:%d\n",a-b);
          break;
    case 3:printf("Multiplication is:%d\n",a*b);
          break;
    case 4:printf("Division is: %d\n",a/b);
          break;
    default:printf("Please ente valid numbers\n");
          break;
  }

}

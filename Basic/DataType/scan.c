#include<stdio.h>

int main()
{
  int a;
  float f;
  char c;
  char s[10];


  //Scanning the integer
  printf("Enter the integer value:\n");
  scanf("%d",&a);

  //Scanning the float
  printf("Enter the float value:\n");
  scanf("%f",&f);

  //Scanning the character
  printf("Enter the character value:\n");
  scanf(" %c",&c);                            //if %c is not take then leave a space in between them

  //Scanning the String
  printf("Enter the string value\n");
  scanf("%s",&s);

// Printing all
  printf("Entered integer is:%d\n",a );
  printf("Entered Float is:%f\n",f );
  printf("Entered character is:%c\n",c );
  printf("Entered string is:%s\n",s );
}

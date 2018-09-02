#include<stdio.h>
struct sub
{
  int age;
  int weight;
};

struct profile
{
  struct sub des1,des2;
  int sno;
};

int main()
{
  struct profile pro1;

  printf("Enter sno:\n");
  scanf("%d",&pro1.sno);

  printf("Enter age1\n");
  scanf("%d",&pro1.des1.age);

  printf("Enter age2\n");
  scanf("%d",&pro1.des2.age);

  printf("Enter weight1\n");
  scanf("%d",&pro1.des1.weight);

  printf("Enter weight2\n");
  scanf("%d",&pro1.des2.weight);

  printf("Sno is%d\nage1:%d \t age 2:%d\n weight 1:%d\t weight 2: %d",pro1.sno,pro1.des1.age,pro1.des2.age,pro1.des1.weight,pro1.des2.weight);
  return 0;
}

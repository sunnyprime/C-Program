#include<stdio.h>
struct student
{
  char name[50];
  int roll;
};

void display(struct student stu);//Declaration of function by structure

int main()
{
  struct student stud,stud2;
  printf("Enter student's name:");
  scanf("%s",&stud.name);
  printf("Enter roll number: ");
  scanf("%d",&stud.roll);

  printf("Enter student's name:");
  scanf("%s",&stud2.name);
  printf("Enter roll number: ");
  scanf("%d",&stud2.roll);

  display(stud);
  display(stud2);
  return 0;
}
void display(struct student stu)
{
  printf("Output name: %s\n",stu.name);
  printf("Roll number:%d\n",stu.roll);
}

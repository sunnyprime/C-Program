#include<stdio.h>
struct person
{
  int age;
  float weight;
};

int main()
{
  struct person *personPtr,person1;
  personPtr = &person1;

  printf("Enter integer: ");
  scanf("%d",&(*personPtr).age);

  printf("Enter number: ");
  scanf("%f",&(*personPtr).weight);

  printf("Displaying: ");
  printf("\nPersonPtr:%d%f",(*personPtr).age,(*personPtr).weight);
  printf("\nperson1:%d%f",(person1).age,(person1).weight);

  return 0;
}

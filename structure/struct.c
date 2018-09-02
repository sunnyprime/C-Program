#include<stdio.h>
struct distance
{
  int feet;
  float inch;
} dist1,dist2,sum;

int main()
{
  printf("1st distance\n");

  printf("Enter feet: ");;
  scanf("%d",&dist1.feet);

  printf("2nd distance\n");

  printf("Enter feet: \n");
  scanf("%f",&dist1.inch);

  printf("2nd distance\n");

  printf("Enter feet: ");
  scanf("%d",&dist2.inch);

  printf("Enter inch: ");
  scanf("%f",&dist2.inch);

  sum.feet = dist1.feet + dist2.feet;
  sum.inch = dist1.inch + dist2.inch;

  printf("Sum of feet is: %d\n sum of inch is: %f",sum.feet,sum.inch);

}

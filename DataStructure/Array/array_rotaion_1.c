#include<stdio.h>

void leftrotationbyone(int arr[],int n);

void leftrotaion(int arr[],int d,int n);

void printArray(int arr[],int n);

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  leftrotaion(arr,2,9);
  printArray(arr,9);
}

void leftrotationbyone(int arr[],int n)
{
  int temp = arr[0],i;
  for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
  arr[i]=temp;
}

void leftrotaion(int arr[],int d,int n)
{
  int i;
  for(i=0;i<d;i++)
    leftrotationbyone(arr,n);
}

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}

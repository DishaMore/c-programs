#include<stdio.h>
#include<conio.h>
int main()
{
  int a=10,b=20;
  printf("before swapping a=%d,b=%d",a,b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  printf("after swapping a=%d,b=%d",a,b);
  
  return 0;
}
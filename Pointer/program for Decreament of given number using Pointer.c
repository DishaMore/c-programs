#include<stdio.h>
#include<conio.h>
void main()
{
  int number=50;
  int*p;
  p=&number;
  printf("Address of p variable is %u",p);
  p--;
  printf("After decrement=Address of p variable is %u",p);
  return 0;
}


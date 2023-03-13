#include <stdio.h>
#include <conio.h>
void main()
{
  int number=50;
  int*p;
  p=&number;
  printf("After decrement:Address of number variable is %u",p);
  return 0;
}
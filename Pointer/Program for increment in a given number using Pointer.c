#include<stdio.h>
#include<conio.h>
int main()
{
  int number=50;
  int*p;
  p=&number;
  printf("Address of p Variable is %u\n",p);
  p++;
  printf("After increment Address of p Variable is %u",p);
  
  return 0;
 }
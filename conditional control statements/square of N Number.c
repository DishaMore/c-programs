#include<stdio.h>
#include<conio.h>
int main()
{
  int num1=0,num2=0;
  up:
  
  printf("\n \t ======***======\n");
  printf("\n \t enter first positive integer number=0");
  scanf("%d",&num1);
printf("enter second positive integer number=");
scanf("%d",&num2);
while(num1<=num2)
{
  printf("\n \t square of %d=%d",num1,num1*num1);
}
printf("\n \n \t======***======\n");
printf("\n \t thanks");
getch();
}
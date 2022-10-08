// Maximum from 2 Number - using if else//
#include<stdio.h>
#include<conio.h>
int main()
{
  int Num1=0,Num2=0;
  printf("\n enter two integer numbers = ");
  scanf("%d %d",&Num1,&Num2);
  
if(Num1>Num2)
{
  printf("\n Number %d is Maximum",Num1);
}
else
{
  printf("\n Number %d is maximum",Num2);
}
printf("\n thanks");
getch();
}
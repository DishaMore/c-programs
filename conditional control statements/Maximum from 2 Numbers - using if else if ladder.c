//Maximum From 2 Number - using else if ladder//
#include<stdio.h>
#include<conio.h>
int main()
{
  int Num1=0, Num2=0;
  printf("\n enter 2 integer Number=");
  scanf("%d%d",&Num1,&Num2);

if(Num1==Num2)
{
  printf("\n both given Numbers are equl");
}
else if (Num1>Num2)
{
  printf("\n Number %d is Maximum",Num1);
}
else
{
  printf("\n Number %d is Maximum",Num2);
}
printf("\n thanks");
getch();
}
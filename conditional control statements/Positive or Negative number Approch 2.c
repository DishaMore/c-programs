#include<stdio.h>
#include<conio.h>
int main()
{
  int Num=0;
printf("enter the number=");
scanf("%d",&Num);
if(Num==0)
{
  printf("\n %d is Neutral number",Num);
}
else if(Num>0) 
{
  printf("\n %d is positive",Num);
}
else
{
  printf("\n %d is negative",Num);
}
printf("thanks");
getch();
}

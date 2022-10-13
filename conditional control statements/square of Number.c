#include<stdio.h>
#include<conio.h>
int main()
{
  int Num=0;
  up:
  printf("\n \t =======****======\n");
  scanf("%d",&Num);
  
if (Num<=0)
{
  printf("\n \t invalid number \n \n \t please enter Another Number ");

getch();
goto up;
}
printf("\n \t square of %d = %d",Num ,Num*Num);
printf("\n \n \t=====****======\n");
printf("\n \n \t thanks \n");

getch();
}

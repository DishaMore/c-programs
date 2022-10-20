#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,dcnt=0,Temp=0;
  up:
  printf("\n enter positive integer number to calculate its digit sum=");
  scanf("%d",&No);
  Temp=No;
  if(No<0)
  {
    printf("\n invalid input...");
    goto up;
  }
  while(Temp>0)
  {
    dcnt++;
    Temp=Temp/10;
  }
  printf("\n \n No of digit in given number %d is = %d",No,dcnt);
  getch();
}


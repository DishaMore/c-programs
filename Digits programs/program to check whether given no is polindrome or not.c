#include<stdio.h>
#include<conio.h>
void main()
{
  int No=0,Dig=0,Rev=0,Temp=0,Dcnt=0;
printf("\n enter integer number=");
scanf("%d",&No);
Temp=No;
if(No>0)
while(Temp>No)
{
  Dig=Temp%10;
  Dcnt++;
  Temp=Temp/10;
}
printf("\n Dcount of given number %d=%d",No,Dcnt);
getch();
}
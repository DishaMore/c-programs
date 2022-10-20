#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,Dig=0,Rev=0,Temp=0;
  printf("\n enter integer number=");
  scanf("%d",&No);
  Temp=No;
  if(No>0)
  {
    while(Temp>0)
    {
      Dig=Temp%10;
      Rev=(Rev*10)+Dig;
      Temp=Temp/10;
    }
  }
  else
  {
    while(Temp<0)
    {
      Dig=Temp%10;
      Rev=(Rev*10)+Dig;
      Temp=Temp/10;
      
    }
   }
   printf("\n \n Reverse of Given Number %d is=%d",No,Rev);
   getch();
 }

  

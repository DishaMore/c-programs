#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0,temp=0;
  up:
  printf("\n enter positive integer number=");
  scanf("%d",&No);
  temp=No;
if(No<0)
{
  printf("\n invalide input ");
  goto up;
 }
while(temp>0)
{
  No=temp%10;
  temp=temp/10;
}
printf("\n \n output");
getch();
}


  

  
  


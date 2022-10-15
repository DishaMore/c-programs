#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0, Dig=0, dsum=0, temp=0;
  up:
  printf("\n enter positive integer Number to calculate its Digit sum=");
  scanf("%d",&No);
  
  temp=No;
  if(No<0)
  {
    printf("\n Invalide Input...");
    goto up;
  }
  while(temp>0)
  {
    Dig=temp%10;
    dsum=dsum+Dig;
    temp=temp/10;
  }
  printf("\n \n sum of Digits in given number %d is=%d",No,dsum);
  getch();
}
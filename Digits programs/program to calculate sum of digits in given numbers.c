#include<stdio.h>
#include<conio.h>
int main()
{
  int No=0, dcnt=0, temp=0;
  up:
  printf("\n enter positive integer Number to calculate its digit sum=");
  scanf("%d",&No);
  temp=No;
if(No<0)
  {
    printf("\n Invalid Input....");
    goto up;
  }
while(temp>0)
{
  dcnt++;
  temp/10;
} 
printf("\n \n No of digit in Given Number %d is = %d",No,dcnt);
getch();
}
  ts in given number %d is=%d",No,dsum);
  getch();
}
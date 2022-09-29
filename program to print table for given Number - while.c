//program to print table for given number - while//
#include<stdio.h>
#include<conio.h>
int main()
{
int No = 0,cnt = 0;
printf("\n enter a number to print its table");
scanf("%d",&No);
cnt=1;
printf("\n ======***======\n");
while(cnt <= 10)
{
  printf("\n %d",No * cnt);
  cnt++;
}
printf("\n =====***=====\n");
printf("\n \n thanks");
getch();
}


//program to print table of given Number-do while//
#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0,cnt = 0;
  printf("\n enter number for print its table");
  scanf("%d",&No);
  
  printf("\n******\n");
  cnt=1;
  do
  {
    printf("\n\t%d",No * cnt);
  }
  while(cnt<=10);
  printf("\n*******\n");
  printf("\n\n thanks");
  getch();
}
 
  
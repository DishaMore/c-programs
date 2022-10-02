// peogram to print reverae table - while//#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, cnt = 0;
  
  printf("\n \t enter Number to print reverse table =");
  scanf("%d",&No);
  
  printf("\n ***** \n");
  cnt=10;
  while(cnt>=1)
  {
    printf("\n\t%d",No * cnt);
    cnt--;
  }
printf("\n thanks \n");
getch();
}
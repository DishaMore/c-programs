#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  printf("\n enter your Number");
  scanf("%d",&Num);
if(Num %2 == 0)
{
  printf("\n %d is even",Num);
}
else
{
  printf("\n %d is odd",Num);
}
printf("\n thanks");
getch();
}

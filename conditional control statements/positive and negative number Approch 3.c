#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  up:
  printf("\n enter your Number=");
  scanf("%d",&Num);
  
if (Num == 0)
  {
    printf("\n %d is Neutral Number ,\n please enter Another number ");
    
    
    goto up;
  }
if (Num > 0) 
  {
    printf("\n %d is positive", Num);
  }
else
{
  printf("\n %d is negative",Num);
}
printf("\n thanks");
getch();
return 0;
}

// Month_ else if ladder//
#include<stdio.h>
#include<conio.h>
int main()
{
  int Month = 0;
printf("\n enter No (1-12) of Months");
scanf("%d",&Month);

if (Month == 1)
{
  printf("\n \t January");
}
else if (Month == 2)
{
  printf("\n \t february");
}
else if (Month == 3)
{
  printf("\n \t March");
}
else if(Month == 4)
{
  printf("\n \t April");
}
else if (Month == 5)
{
  printf("\n \t May");
}
else if (Month == 6)
{
  printf("\n \t June");
}
else if(Month == 7)
{
  printf("\n \t  July");
}
else if( Month == 8)
{
  printf("\n \t August");
}
else if ( Month == 9)
{
  printf("\n \t september");
}
else if ( Month == 10)
{
  printf("\n \t Octomber");
}
else if ( Month == 11)
{
  printf("\n \t November");
}
else if ( Month == 12)
{
  printf("\n \t December");
}
else
{
  printf("\n \t invalid Number of Month");
}
getch();
}
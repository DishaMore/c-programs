#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k;
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf(" * ");
    }
    for(k=1;k<=5;k++)
    {
      if(i>4 && i<7)
      {
        printf(" * ");
      }
      else
      {
        printf(" * ");
      }
    }
    for(j=0;j<2;j++)
    {
      printf(" * ");
    }
    printf("\n");
  }
getch();
} 
  



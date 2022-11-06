#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k;
  
  for(i=0;i<=1;i++)
  {
    for(j=0;j>=i;j--)
    {
      printf(" ");
    }
   for(k=0;k<=2;k++)
   {
     printf("*");
   }
  }
  for(i=1;1<=i;i++)
  {
    if(i>4 && i<7)
    {
      printf("*");
    }
    else
    {
      printf(" ");
    }
  }
  for(k=0;k<2;k++)
  {
    printf("*");
  }
  for(j=10;j>=i;j--)
  {
    printf("*");
  }
  printf("\n");
  getch();
}

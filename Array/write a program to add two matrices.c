#include<stdio.h>
#include<conio.h>
int main()
{
  int a[2][3],b[2][3],c[2][3],j,i;
  clrscr();
  printf("Enter the First Matrix");
  for(i=0;i<2;i++)
  {
    scanf("%d",&a[i][j]);
  }

  printf("Enter 2nd Matrix \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("The First Matrix is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d \t",a[i][j]);
    }
    printf("\n");
  }
  printf("The sum of matrix is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
      printf("%d",c[i][j]);
    }
    printf("\n");
  }
 getch();
 }
 
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[2][2],b[2][2],c[2][2],i,j,k,sum;
  clrscr();
  printf("Enter First Matrix..... \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter 2nd Matrix..... \n");
  for(i=0;i<2;i++)
  {
    for( j=0;j<2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n elements of the first matrix.... \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d",a[i][j]);
    }
  }
      printf("\n");
  printf("Elemen of the second matrix..... \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d",b[i][j]);
    }
    printf("\n");
  }
 printf("The product of matrix is....");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
   {
     sum=0;
     for(k=0;k<2;k++)
     {
       sum=sum + a[i][k] * b[k][j];
       c[i][j]=sum;
     }
   printf("%d \t",c[i][j]);
   }
   printf("\n");
 }
 getch();
}
   
 
  
  


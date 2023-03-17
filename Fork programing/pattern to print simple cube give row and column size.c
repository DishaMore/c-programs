#include <stdio.h>
#include <conio.h>
int main()
{
  int i = 0, j = 0, r = 0, c = 0;
  
  printf("\n Enter row value for pattern \n");
  scanf("%d",&r);
  
  printf("\n Enter column value for pattern \n");
  scanf("%d",&c);
  
  
  printf("\n============pattern=============\n");

  
  for(i = 1; i <= r; i++)
{
  
  {
    for(j = 0; j <= c; j++)
    
    printf("  *  ");
    
  }
  
    printf("  \n  ");
    
}   

  printf("\n=================================\n");
  
  getch();
  return 0;
}   
   
   
  
  

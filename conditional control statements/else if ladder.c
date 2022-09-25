//.. Mall else if ladder..//
#include<stdio.h>
#include<conio.h>
int main()
{
  float Amount = 0.0;
  
  printf("\n enter your Accounr balance");
  scanf("%f",&Amount);
  
  if(Amount > 10000)

  {
    printf("\n \n \t welcome to mall !! \n")
    printf("\n \t you can enjoy all shops\n");
    printf("\n \t go to counter No 7 for prime offers \n ");
     ");
  }   
 else if (Amount > = 7000)
 {
   printf("\n \n \t welcome to mall !!\n");
   prinrf("\n \t you can enjoy all shops \n");
  }
 else if (Amount > 1000)
 {
   printf("\n \n \t welcome to mall !! \n ");
   printf("\n \t you can shop at ground \n");
  } 
 else
 {
   printf("\n \t minimum balance required to shop is 1000+\n");
 }
 printf("\n \n Thanks for visit !!");
  
 getch();
 
} 

#include <stdio.h>
#include <conio.h>
struct product
{ 
  int p_ID;
  char p_Name[20];
  float p_p_price;
  float p_s_price
};
int main()
{

  struct product prod[5];
  int i=0;
  for(i=0;i<5;i++)
  //Accept product details=>
  {
    printf("\n Enter product ID=");
    scanf("%d",&prod[i].p_ID);
    printf("\n Enter product Name=");
    gets("prod[i].p_Name");
    printf("\n Enter product purchase price=");
    scanf("%f",&prod[i].p_p_price);
    printf("\n Enter product selling price=");
    scanf("%f",&prod[i].p_s_price);
  }

getch();

printf("==========******==========\n");
   //Display product details=> 
 for(i=0;i<5;i++)
 printf("\n %d product Details=>",i++);
 {
   printf("\n ID=%d",prod[i].p_ID);
   printf("\n p_Name=%s",prod[i].p_Name);
   printf("\n p_p_price=%0.2f",prod[i].p_p_price);
   printf("\n p_s_price=%0.2f\n",prod[i].p_s_price);
 }
 printf("\n========*****=========\n");
 getch();
}
 


  
  

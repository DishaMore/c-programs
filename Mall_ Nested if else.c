// Mall_ Nested if else //
#include<stdio.h>
#include<conio.h>
int main()
{
  float Amount = 0.0;
  printf("\n enter your account balance = ");
  scanf("%f",&Amount);
  
if (Amount > 1000)
{
  printf("\n \n \t welcome to mall \n");
 
 if (Amount > 10000)
 {
   printf("\n \n \t you are prime member of these mall ");
 }
 printf("\n \n \t Have you Nice shopping");
}
else
{
  printf("\n \n \t minimum balance required to shop here is 1000+\n");
 if(Amount > 500)
 {
   printf("it but you can visit our outlet at corner\n");
 }
 else
 {
   printf("\n \t you are not eligible to shop");
 }
}
printf("\n \n thanks for visit");
getch();
}
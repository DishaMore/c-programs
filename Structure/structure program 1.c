#include <stdio.h>
#include <conio.h>
struct product
{
  int p_ID;
  char p_Name[40];
  float p_price;
  float s_price;
};
int main()
{
  struct product obj1,obj2;
  
  obj1.p_ID=17;
  strcpy(obj1.p_Name,"Dairy milk");
  obj1.p_price=84;
  obj1.s_price=90;
  printf("\n \n enter product ID=");
  scanf("%d",&obj2.p_ID);
  
  printf("\n \n enter product Name=");
  gets("obj2.p_Name");
  
  printf("\n enter purchase price=");
  scanf("%f",&obj2.p_price);
  
  printf("\n Enter purchase price =");
  scanf("%f",&obj2.p_price);
  
  printf("\n enter selling price=");
  scanf("%f",&obj2.s_price);
  
  printf("\n\n Display product details => \n");
  
  printf("\n\n\t product ID=%d,\n\n\t product Name=%s,\n\n\t p_price=%f,\n\n\t s_price=%f",obj1.p_ID,obj1.p_Name,obj1.p_price,obj1.s_price);
  printf("\n\n\t product ID=%d,\n\n\t product Name=%s,\n\n\t p_price=%f,\n\n\t s_price=%f",obj2.p_ID,obj2.p_Name,obj2.p_price,obj2.s_price);
  getch();
}
  
  
  

  
  
  

  
  
  
  
  
  
  
  
 

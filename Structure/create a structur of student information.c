#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student

{
  int R-No;
  char Name[40];
  char city[20];
  float per;
};
int main()
{
  struct student std1,std2;
  std1.R-No = 65;
  strcpy(std1.Name,"Amey wagh");
  strcpy(std1.city,"pune");
  std1.per = 75.556431;
  
printf("\n Accept student details =>\n");
  printf("\n Enter Roll No:");
  scanf("%d",&std2.R-No);
  
  printf("\n Enter Name:");
  gets("std2.Name");
  
  printf("\n Enter city:");
  gets("std2.city");
  
  printf("\n Enter per");
  scanf("%f",&std2.per);
  
printf("\n Display student details =>\n");

  printf("\n\n\t student Roll No=%d,\n\n\t student Name=%s,\n\n\t student city=%s,\n\n\t student per=%f",std1.R-No,std1.Name,std1.city,std1.per);
  
  printf("\n\n\t student Roll No=%d,\n\n\t student Name=%s, \n\n\t student city=%s,\n\n\t student per=%f",std2.R-No,std2.Name,std2.city,std2.per);
 
getch();
} 
  


  


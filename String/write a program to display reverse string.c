#include<stdio.h>
#include<conio.h>
int main()
{
  char temp='\0',Csrc[50]={'\0'};
  int i=0,j=0;
  puts("\n Enter a string:");
  gets(Csrc);
  while(Csrc[i]!='\0')
  {
    i++;
  }
  i--;
  while(i>j)
  {
    temp=Csrc[i];
    Csrc[i]=Csrc[j];
    Csrc[j]=temp;
    
    i--;
    j++;
   }
  printf("\n Given string after Reverse is = %s",Csrc);
  getch();
 }
    
    
    
    
    

  

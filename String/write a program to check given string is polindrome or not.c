#include<stdio.h>
#include<conio.h>
int main()
{
  char Csrc[50]={'\0'};
  int i=0,j=0;
  puts("\n Enter aString:");
  gets(Csrc);
  while(Csrc[i]!='\0')
  {
    i++;
  }
  i--;
  while(i>j)
  {
    if(Csrc[i]!=Csrc[j])
    {
      break;
    }
    i--;
    j++;
  }
 if(i<=j)
 {
   printf("\n Given string <%s> is polindrome",Csrc);
 }
 else
 {
   printf("\n Given string <%s> is Not polindrom",Csrc);
 }
getch();
 }
  

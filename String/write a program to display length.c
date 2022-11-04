#include<stdio.h>
#include<conio.h>
int main()
{
  char Csrc[10]={};
  int len=0;
  puts("\n Enter a String:");
  gets(Csrc);
  while(Csrc[len]!='\0')
  {
    len++;
  }
  printf("\n length of given string is=%d",len);
  getch();
}


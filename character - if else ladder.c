// char - uppercase/ lowercase else if ladder//
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch = '\0';
  printf("\n \t enter the character \n");
  scanf("%c",&ch);
  if(ch >= 'a' && ch <= 'z')
 {
  printf("\n \t entered character is lowercase \n");
 }
else if (ch >= 'a'&& ch <= 'z')
{
  printf("\n \t enter character is uppercase \n");
}
else if (ch >= 'a' && ch<= 'z') 
{
  printf("\n \t entered character is uppercase \n");
}
else
{
  printf("\n \t enter letter is neigther uppercase nor lowercase");
}
getch();
}



 
  
  

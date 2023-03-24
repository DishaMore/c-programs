#include <stdio.h>
#include <conio.h>
int main()
{
  int Ascii = 0;
  
  printf(" \n Ascii table \n");
  
  
  for(Ascii = 0; Ascii <= 127; Ascii++)
  
  {
    
    printf(" \n %d = %c \n");
    
  }
  
  getch();
  return 0;
}
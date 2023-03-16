#include <stdio.h>
#include <conio.h>
int main()
{
  int sum = 0,i = 0,cnt = 0;
  int *Mptr = NULL;

  printf("\n Enter How any Costomers =");
  scanf("%d",&cnt);

  Mptr = (int*)malloc(cnt * sizeof (int));

  for(i = 0; i < cnt ; i++)

  {
    printf("\n Enter a number =");
    scanf("%d",&Mptr[i]);
  }

  for(i = 0; i < cnt; i++)

  {
    sum = sum + Mptr[i];
  }

  printf("\n Total Bill = %d",sum);

  getch();
  return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
  int Arr[5],i;
for(i=0;i<5;i++)
{
  printf("Enter Value:%d",i);
  scanf("%d",&Arr[i]);
}
for(i=0;i<5;i++)
{
  printf("\n Element of Array=%d",Arr[i]);
}
getch();
}
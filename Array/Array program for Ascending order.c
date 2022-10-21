#include<stdio.h>
#include<conio.h>
int main()
{
  int num[30],i,j,temp,n;
  clrscr();
  printf("how many array elements=\n");
  scanf("%d",&n);
  printf("enter the element=\n");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;)
    {
      if(num[i]>num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }
  printf("The no sorted in ascending order are=\n");
  for(i=0;i<n;i++)
  printf("%d",num[i]);
  getch();
}
  


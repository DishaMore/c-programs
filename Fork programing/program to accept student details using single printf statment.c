#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
          char Name[23];
          int Roll_No;
          char city[20];
          char course[20];


          printf("\n ================student details===============\n");

          fflush(stdin);

          printf("\n Enter Student Name = ");
          scanf("%s",&Name);

          fflush(stdin);

          printf("\n Enter Roll No = ");
          scanf("%d",&Roll_No);

          fflush(stdin);

          printf("\n Enter city name = ");
          scanf("%s",&city);

          fflush(stdin);

          printf("\n Enter course Name = ");
          scanf("%s",&course);

          fflush(stdin);


          printf("\n Display student details");

          fflush(stdin);

          printf("\n=================================================================");

          printf("\n Name = %s \n Roll_No = %d \n city = %s \n course = %s",Name,Roll_No,city,course);

          printf("\n=================================================================");

          getch();
          return 0;

}
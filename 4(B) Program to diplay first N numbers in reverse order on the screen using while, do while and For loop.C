//  Title: 4(B) Program to diplay first N numbers in reverse order on the screen using while, do while and For loop
//   Name: Narkhede Anup Anant
//Roll no: 549

#include<stdio.h>
void main()
{
 int n,i;
 clrscr();
 printf("\n Enter the No");
 scanf("%d",&n);
 printf("\n|--------------------------------------------|");
 printf("\n|  first %d natural numbers in reverse order  |",n);
 printf("\n|--------------------------------------------|");

 printf("\n\n   While loop:");
 i=n;
   while(i>=1)
      {
	printf(" %2d",i);
	i--;
      }

 printf("\n\nDo_While loop:");
 i=n;
   do{
       printf(" %2d",i);
       i--;
     }while(i>=1);

  printf("\n\n     For Loop:");
   for(i=n;i>=1;i--)
     {
       printf(" %2d",i);

     }

    getch();
  }
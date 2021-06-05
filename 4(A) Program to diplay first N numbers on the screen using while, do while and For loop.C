//  Title: 4(A) Program to diplay first N numbers on the screen using while, do while and For loop
//   Name: Narkhede Anup Anant
//Roll no: 549

#include<stdio.h>
void main()
{
 int n,i=1;
 clrscr();
 printf("\n Enter N");
 scanf("%d",&n);
 printf("\n*********************************");    //for output design(FOD)
 printf("\n* First %d natural numbers using ",n);
 printf("\n*********************************");    //FOD

 printf("\n\n   While loop:");
   while(i<=n)
      {
	printf(" %2d",i);
	i++;
      }
 printf("\n   ^^^^^^^^^^");                        //FOD

 printf("\n\nDo_While loop:");
 i=1;
   do{
       printf(" %2d",i);
       i++;
     }while(i<=n);
 printf("\n^^^^^^^^^^^^^");                         //FOD

  printf("\n\n     For Loop:");
   for(i=1;i<=n;i++)
     {
       printf(" %2d",i);

     }
 printf("\n     ^^^^^^^^");                         //FOD

    getch();
  }

//Title:  2(B)Program to display the quotient and remainder after the division of two numbers.
//Name:   Narkhede Anup Anant
//Roll No:549

#include<stdio.h>
void main()
{
 int a,b,q,r;
 clrscr();
 printf("Enter the Dividend and Divisor");
 scanf("%d%d",&a,&b);
 q=a/b;
 r=a%b;
 printf("\nDividend: %d \nDivisor:  %d \nQuotient: %d \nRemainder:%d",a,b,q,r);
 getch();
 }

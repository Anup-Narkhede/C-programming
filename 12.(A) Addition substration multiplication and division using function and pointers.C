// Name: Anup Anant Narkhede
//Roll no: 549
//Title: 12
/*__________________________________________________________________________________*/
/* 12.(A) Addition substration multiplication and division using function and pointers*/
/*___________________________________________________________________________________*/
#include<stdio.h>
int add(int*,int*);
int sub(int*,int*);
int mul(int*,int*);
int div(int*,int*);

void main()
{
  int a,b;
  int *p,*q;
  clrscr();
  printf("Enter first two no");
  scanf("%d%d",&a,&b);

  add(&a,&b);        //calling of add function
  sub(&a,&b);        //calling of sub function
  mul(&a,&b);        //calling of mul function
  div(&a,&b);        //calling of div function


  getch();

  }

  int add(int *p, int *q)      //function defination
     {
       int c;
       c=*p + *q;
       printf("   Addition of %d and %d is = %d",*p,*q,c);
       return 0;


      }

  int sub(int *p, int *q)      //function defination
     {
       int c;
       c=*p - *q;
       printf(" \n substraction of %d and %d is = %d",*p,*q,c);
       return 0;


      }


   int mul(int *p, int *q)      //function defination
     {
       int c;
       c=*p * *q;
       printf(" \n  multiplication of %d and %d is = %d",*p,*q,c);
       return 0;


      }

   int div(int *p, int *q)      //function defination
     {
       int c;
       c=*p / *q;
       printf(" \n  division of %d and %d is = %d",*p,*q,c);
       return 0;


      }



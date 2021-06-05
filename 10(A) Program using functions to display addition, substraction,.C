//Name: Narkhede Anup Anant
//Title: 10
//Roll No: 549
/*_______________________________________________________________________
______________________________*/
/*10(A) Program using functions to display addition, substraction,
multiplication, division of two numbers.*/
/*_______________________________________________________________________
______________________________*/
#include<stdio.h>
int add(int,int);
int sub(int,int);            //function declaration
int mult(int,int);
int div(int,int);
void main()
{
  int a,b;
  clrscr();
  printf("Enter first two no");
  scanf("%d%d",&a,&b);

  add(a,b);        //calling of add function
  sub(a,b);         //calling of sub function
  mult(a,b);         //calling of mul function
  div(a,b);          //calling of div function

  getch();

  }

  int add(int a, int b)      //function defination
     {
       int c;
       c=a+b;
       printf("   Addition is = %d",c);
       return 0;


      }

  int sub(int a, int b)      //function defination
     {
       int c;                //local variable
       c=a-b;
       printf("\nSubstraction is = %d",c);
       return 0;

      }
  int mult(int a, int b)      //function defination
     {
       int c;                //local variable
       c=a*b;
       printf("\nMultiplicaton is = %d",c);
       return 0;

      }

  int div(int a, int b)      //function defination
     {
       int c;                     //c is local variable
       c=a/b;
       printf("\n    Division is = %d",c);
       return 0;                       // will not return to main function

      }



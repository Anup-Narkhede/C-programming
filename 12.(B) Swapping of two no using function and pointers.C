// Name: Anup Anant Narkhede
//Roll no: 549
//Title: 12
/*______________________________________________________________*/
/* 12.(B) Swapping of two no using function and pointers
/*______________________________________________________________*/
#include<stdio.h>
int swapp(int*,int*);   //function declaration
void main()
{
  int a ,b;
  int *p,*q;
  clrscr();
  printf("Enter the value of a and b");
  scanf("%d%d",&a,&b);

  swapp(&a,&b);    // function calling

  getch();

  }

 int swapp(int *p,int *q)    //function defination
    {
       int m;
       m=*p;  //*p value stored in m
       *p=*q; //now p is blank fill *q value in *p
       *q=m;  // now q is blank fill the m in *q

       //*p value has been assigned to *q and vice versa

      printf("\n swapping\n a is %d and b is %d",*p,*q);
      return 0;
    }

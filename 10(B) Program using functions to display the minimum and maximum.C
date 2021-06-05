//Name: Narkhede Anup Anant
//Title: 10(A &(B)
//Roll No: 549
/*_______________________________________________________________________
______________*/
/*10(B) Program using functions to display the minimum and maximum
element in an array.*/
/*_______________________________________________________________________
_____________*/
#include<stdio.h>
int minmax(int[],int);
void main()
{

  int n,marks[100],i;
  clrscr();
  printf("Enter the no of elements in an array");
  scanf("%d",&n);

  printf("Enter elements of arrray");

     for(i=0;i<n;i++)
	{
	  scanf("%d",&marks[i]);         //scan elements of array
	 }

    minmax(marks,n);               //function calling

  getch();
  }
	//function defination

  int minmax(int marks[],int n)
      {
	 int i,min,max;
	 min=max=marks[0];
	   for(i=0;i<n;i++)
	     {
	       if(marks[i]>max)
		  {
		     max=marks[i];
		   }

		if(marks[i]<min)
		  {
		    min=marks[i];
		   }
		 }
	      printf("Max no is %d \n min no is %d",max,min);
	    return 0;
	  }
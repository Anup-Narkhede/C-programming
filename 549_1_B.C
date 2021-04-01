//  Title: 1.B)Menu driven program to display addition, substraction, multiplication, division of two numbers.
//   Name: Narkhede Anup Anant
//Roll no: 549

#include<stdio.h>
void main()
{

 int a,b,c,option,n;
 clrscr();
 do{
 printf("Please select option");
 printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit");
 scanf("%d",&option);
 if(option==5)
   {
     break;
   }
 switch(option)
  {
   case 1:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a+b;
	  printf("\3 Addition of %d and %d is %d \3",a,b,c);
	  break;
   case 2:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a-b;
	  printf("\4 Subtraction of %d and %d is %d \4",a,b,c);
	  break;
   case 3:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a*b;
	  printf("\5 Multiplication of %d and %d is %d \5",a,b,c);
	  break;
   case 4:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  c=a/b;
	  printf("\6 Division of %d and %d is %d \6",a,b,c);
	  break;

   default:
	  printf("\1 Invalid Option \1");
   }

    printf("\n\nDo you want to repeat\n1.Yes \n2.No");
    scanf("%d",&n);

 }while(n!=2);

  getch();

  }



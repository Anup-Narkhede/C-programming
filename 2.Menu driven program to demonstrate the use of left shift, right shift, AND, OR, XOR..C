//  Title: 2.(B) Menu driven program to demonstrate the use of left shift, right shift, AND, OR, XOR.
//   Name: Narkhede Anup Anant
//Roll no: 549

#include<stdio.h>
void main()
{

 int a,b,option,n;
 clrscr();
 do{
 printf("Please select option");
 printf("\n1.Left Shift \n2.Right Shift \n3.AND \n4.OR \n5.XOR \n6.Exit");
 scanf("%d",&option);
 if(option==6)
   {
     break;
   }
 switch(option)
  {
   case 1:
	  printf("Enter a number and left shift by ");
	  scanf("%d%d",&a,&b);
	  printf("\3 %d left shift by %d is %d \3",a,b,a<<b);

	  break;
   case 2:
	  printf("Enter a number and right shift by");
	  scanf("%d%d",&a,&b);
	  printf("\4 %d right shift by %d is %d \4",a,b,a>>b);
	  break;
   case 3:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  printf("\5 %d AND %d is %d \5",a,b,a&b);
	  break;
   case 4:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  printf("\6 %d OR %d is %d \6",a,b,a|b);
	  break;

   case 5:
	  printf("Enter two no");
	  scanf("%d%d",&a,&b);
	  printf("\6 %d XOR %d is %d \6",a,b,a^b);
	  break;

   default:
	  printf("\1 Invalid Option \1");
   }

    printf("\n\nDo you want to repeat\n1.Yes \n2.No");
    scanf("%d",&n);

 }while(n!=2);

  getch();

  }
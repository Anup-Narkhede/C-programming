//  Title: 3(A) Menu driven program to demonstrate the use of mathematical functions supported by math.h library.
//   Name: Narkhede Anup Anant
//Roll no: 549

#include<stdio.h>
#include<math.h>
void main()
{
 int option,n;
 float a,b;
 clrscr();
 do{
 printf("Please select option");
 printf("\n1.Sqrt(x) \n2.sin(x) \n3.cos(x) \n4.tan(x) \n5.pow(x,y) \n6.fmod(x,y) \n7.fabs(x) \n8.ceil(x) \n9.log(x) \n10.log10(x) \n11.Exit");
 scanf("%d",&option);
 if(option==11)
   {
     break;
   }
 switch(option)
  {
   case 1:
	  printf("Enter the number");
	  scanf("%f",&a);
	  printf("\3 The sqrt of %f is %f \3",a,sqrt(a));
	  break;

   case 2:
	  printf("Enter the angle");
	  scanf("%f",&a);
	  printf("\3 The sin(%f) is %f \3",a,sin(a));  //angle should be in radian
	  break;

   case 3:
	  printf("Enter the angle");
	  scanf("%f",&a);
	  printf("\3 The cos(%f) is %f \3",a,cos(a));
	  break;

   case 4:
	  printf("Enter the angle");
	  scanf("%f",&a);
	  printf("\3 The tan(%f) is %f \3",a,tan(a));
	  break;

   case 5:
	  printf("Enter the number and its power");
	  scanf("%f%f",&a,&b);
	  printf("\3 %f^%f : %f \3",a,b,pow(a,b));
	  break;

   case 6:
	  printf("Enter dividend and divisor");
	  scanf("%f%f",&a);
	  printf("\3 Remainder is %f \3",fmod(a,b));
	  break;

   case 7:
	  printf("Enter the number");
	  scanf("%f",&a);
	  printf("\3 fabs is %f \3",fabs(a)); //sign changes
	  break;

   case 8:
	  printf("Enter the number");
	  scanf("%f",&a);
	  printf("\3 ceil is %f \3",ceil(a)); // smallest round up
	  break;

   case 9:
	  printf("Enter the number");
	  scanf("%f",&a);
	  printf("\3 log(%f) is %f \3",a,log(a)); //base is e
	  break;

   case 10:
	  printf("Enter the number");
	  scanf("%f",&a);
	  printf("\3 log10(%f) is %f \3",a,log10(a));
	  break;
   default:
	  printf("\1 Invalid Option \1");
   }

    printf("\n\nDo you want to repeat\n1.Yes \n2.No");
    scanf("%d",&n);

 }while(n!=2);

  getch();

  }

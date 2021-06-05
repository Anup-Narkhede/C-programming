#include<stdio.h>
void main()
{
  int r1,r2,c1,c2,m1[10][10],m2[10][10],m3[10][10],i,j,option;
  clrscr();


      printf("\nchoose option\n1.Add\n2.sub\n3.transpose");
      scanf("%d",&option);

       switch(option)
       {  //switch starts




    case 1:
       printf("Matrix");
       printf("\nEnter the no of rows and columns of first  matrix");
       scanf("%d%d",&r1,&c1);
       printf("\nEnter the no of rows and columns of second  matrix");
       scanf("%d%d",&r2,&c2);

	if(r1==r2 && c1==c2)
	{
	  printf("Enter the elements of first matrix"); //first matrix from user
	   for(i=0;i<r1;i++)
	      {
		 for(j=0;j<c1;j++)
		    {
		      scanf("%d",&m1[i][j]);

		     }
		      //for well designed matrix
	       }



	 printf("Enter the elements of second matrix"); //second matrix from user
	   for(i=0;i<r2;i++)
	      {
		 for(j=0;j<c2;j++)
		    {
		      scanf("%d",&m2[i][j]);

		     }
		   }

	       // 2nd matrix input completed

	     printf("addition is=\n");

	    for(i=0;i<r2;i++)
	      {
		 for(j=0;j<c2;j++)
		    {
		      m3[i][j]=m1[i][j]+m2[i][j];    //output of 3rd matrix
		      printf(" %2d ",m3[i][j]);
		     }
		   printf("\n");   //for well designed matrix
	       }
	      //resultant matrix formula and output completed

	 }
	 else
	  {
	    printf("\nnot possible");
	    }
	 break;

       case 2:
       printf("Matrix");
       printf("\nEnter the no of rows and columns of first  matrix");
       scanf("%d%d",&r1,&c1);
       printf("\nEnter the no of rows and columns of second  matrix");
       scanf("%d%d",&r2,&c2);
       if(r1==r2 && c1==c2)
	{
	  printf("Enter the elements of first matrix"); //first matrix from user
	   for(i=0;i<r1;i++)
	      {
		 for(j=0;j<c1;j++)
		    {
		      scanf("%d",&m1[i][j]);

		     }
		      //for well designed matrix
	       }



	 printf("Enter the elements of second matrix"); //second matrix from user
	   for(i=0;i<r2;i++)
	      {
		 for(j=0;j<c2;j++)
		    {
		      scanf("%d",&m2[i][j]);

		     }
		   }

	       // 2nd matrix input completed

	     printf("substraction is=\n");

	    for(i=0;i<r2;i++)
	      {
		 for(j=0;j<c2;j++)
		    {
		      m3[i][j]=m1[i][j]-m2[i][j];    //output of 3rd matrix
		      printf(" %2d ",m3[i][j]);
		     }
		   printf("\n");   //for well designed matrix
	       }
	      //resultant matrix formula and output completed



	   }  //if completed
	  else
	  {
	    printf("\nnot possible");
	    }
	  break;

      case 3:

	  printf("\nEnter the no of rows and columns of   matrix");
       scanf("%d%d",&r1,&c1);
       printf("enter the elements of matrix");
	  for(i=0;i<r1;i++)
	    {
	      for(j=0;j<c1;j++)
	      {
	       scanf("%d",&m1[i][j]);
	       }
	     }
	     printf("traspos \n");
	     for(i=0;i<r1;i++)
	    {
	      for(j=0;j<c1;j++)
	      {
	       m1[i][j]=m2[j][i];
	       printf("%d",&m1[i][j]);
	       }
	      printf("\n");
	    }
	      break;

	  default:
	  break;

	 }//switch completed


	  getch();

	}

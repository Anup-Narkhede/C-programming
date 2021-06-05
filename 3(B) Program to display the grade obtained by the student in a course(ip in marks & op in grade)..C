 //  Title: 3(B) Program to display the grade obtained by the student in a course(ip in marks & op in grade).
 //   Name: Narkhede Anup Anant
 //Roll no: 549

 #include<stdio.h>
 void main()

 {
  int marks;
  clrscr();
  printf("Enter Marks");
  scanf("%d",&marks);
  printf("\nYour Marks: %d",marks);

  if(marks>100||marks<0)
    {
      printf("\nInvalid Marks");
    }
  else if(marks<=100 && marks>90)
	 {
	   printf("\n\3 Grade : AA \3");
	 }
  else if(marks<=90 && marks>80)
	 {
	   printf("\nGrade : AB");
	 }
  else if(marks<=80 && marks>70)
	 {
	   printf("\nGrade : BA");
	 }
  else if(marks<=70 && marks>60)
	 {
	   printf("\nGrade : BB");
	 }
  else if(marks<=60 && marks>50)
	 {
	   printf("\nGrade : BC");
	 }
  else if(marks<=50 && marks>40)
	 {
	   printf("\nGrade : CC");
	 }

 else
     {
       printf("\nYou Failed");
     }


  getch();
  }

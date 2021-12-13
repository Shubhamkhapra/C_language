/*write a program to create a function return average and percentage of students
  Author :- Shubham Date:-Nov 12, 2021 */
#include<stdio.h>
int marks(int,int,int,int*,float*);

void main()
	{
		 int hindi,english,math, aggregate_marks;
		 float percentage;
		 printf("Enter the student hindi marks:- ");
		 scanf("%d",&hindi);
		 printf("\nEnter the student english marks:- ");
		 scanf("%d",&english);
		 printf("\nEnter the student math marks:- ");
		 scanf("%d",&math);
     marks(hindi,english,math,&aggregate_marks,&percentage);
		 printf("\nStudent Aggregate Marks is :- %d  And percentage of student is:-  %.2f ",aggregate_marks,percentage);
		 
	}
int marks(int hindi,int english, int math, int *aggregate_marks, float *percentage)
  {
    //Formula for calculate aggregate marks
		 *aggregate_marks=(hindi+english+math)/3.0;
      //Formula for  calculate percentage
		 *percentage= *aggregate_marks/3.0;
  }
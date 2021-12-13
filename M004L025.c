/*Write a program calculate 3 employee overtime.
  Author:- Shubham Date:- Oct 19,2021 */

#include<stdio.h>
#include<conio.h>
void main()
  {
	 int employee,hour;
	 employee=1;
	 clrscr();
	 while(employee<=3)
		{
		  printf("Enter the employee %d working time hours :- \n",employee);
		  scanf("%d",&hour);
			 if(hour>40)
				{
				  printf("Employee  %d is Earn Overtime in Rs:- %.2f ",employee,(hour-40)*12.00);
				}
			 else
				{
				  printf("\nEmployee %d is not earn overtime ",employee);
				}
		  employee +=1;
		  printf("\n");
		}
	 getch();
  }
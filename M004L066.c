/* Write a program to  create a function check Leap year or not using or logical operator.
	Author:- Shubham Date:- Nov 9,2021 */
#include<stdio.h>
int calLeap(int);
int  main()
	{
		int year, calleap;
		
		printf("Enter the Year ");
		scanf("%d",&year);
    calleap=calLeap(year);
    if(calleap)
      {
        printf("\nEnter year is %d this are Leap Year",year);
      }
    else
        {
          	printf("\nEnter year is %d this are  Not Leap Year",year);
        }
		return 0;
	}
int calLeap(int year)
  {
    if(year%400==0 || (year%4==0 && year%100 !=0))
				{
					return 1;
				}
			else
				{
          return 0;
				}
  }





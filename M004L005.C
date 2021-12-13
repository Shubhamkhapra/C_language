/* Write a program to calculate area &  perimeter of rectangle and are & circumference of circle .
	Author:- Shubham Khapra Date:- Oct 6,2021 */
#include<conio.h>
void main()
	{
		float len, breadth, radius, rect_area, rect_peri, circle_area, circle_circ;
		clrscr();
		printf("Enter the length of rectangle :- ");
		scanf("%f",&len);
		printf("\nEnter the Breadth of rectangle :- ");
		scanf("%f",&breadth);
		printf("\nEnter the radius of Circle :- ");
		scanf("%f",&radius);
		rect_area=len*breadth;
		rect_peri=2*(len+breadth);
		printf("\nThe area of Rectangle is %.2f and perimeter of rectangle is %.2f ",rect_area,rect_peri);
		circle_area=3.14*radius*radius;
		circle_circ=2*3.14*radius;
		printf("\nThe area of circle is %.2f and circumference of circle is %.2f ",circle_area,circle_circ);
		getch();
	}
//Write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
//Author :- Shubham   Date:- 12 Oct, 2021

#include<stdio.h>
#include<conio.h>
void main()
 {
		int side1, side2, side3;
		clrscr();
		printf("Enter the first side of triangle= \n");
		scanf("%d",&side1);
		printf("Enter the second side of triangle= \n");
		scanf("%d",&side2);
		printf("Enter the third side of triangle= \n");
		scanf("%d",&side3);
			if(((side1*side1)==(side2*side2+side3*side3))||((side2*side2)==(side1*side1+side3*side3))||((side3*side3)==(side1*side1+side2*side2)))
				{
					printf("\nThe traingle is a right angled Triangle");
				}
			else
				{
					if (side1 == side2  && side2 == side3)
						{
							printf("\nEquilateral Trangle");
							//If all sides are equal
						}
					else
						{
							if (side1== side2 || side2 == side3 || side3 == side1 )
								{
									printf("\nIsoceles Triangle");
									// If any side are equal
								}
							else
								{
									printf("\nScalene Triangle");
									//If none side are equal
								}
						}
				}
	  getch();
 }


/* test case
 5 5 5
 equilateral

 5 3 4
 right
 
 12 4 9
 scalene
 
  5 5 3 or 2 2 3
  Isoceles 

  3 4 5
  Triangle is right angled
 */

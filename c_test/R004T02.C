/*Write a program you given an integer number n you need to convert all zero
of N to 5.
Author:- Shubham  Date:- 29 Nov, 2021 */
#include<stdio.h>
// #include<conio.h>
long int con(long int);
int main()
	{
		long int num, n;
		// clrscr();
		printf("\nEnter the integer number :- \n");
		scanf("%ld",&num);
		n=con(num);
		printf("n value is %ld ",n);
		// getch();
		return 0;
	}
long int con(long int num)
	{
		int rem=0, val=1, revs=0;
		while(num!=0)
			{
				rem = num%10;
				if(rem==0)
					{
						rem= 5;
					}
				val =val *10;
				rem=(rem*val)/10;
				// val = (val*10)+rev;
				num=num/10;
				revs = revs+rem;
			}
		return revs;
	}

//Find the entered number is prime or not.
//Author :- Shubham Khapra  Date:- 1 August , 2020
#include<stdio.h>

int main()
   {
	int  n ,i,count=0 ;
	printf("Enter any  number :- ");
	scanf("%d", &n);
	
	for (i=2; i <= sqrt(n)  ; i++)
		{
			if (n % i ==0)
				{
					count ++;
				}		
		}
	if (count == 0)	
		{
			printf("\nPrime number");
		}
	else
		{
			printf("Not prime number");
		}
	
	return 0;
 }

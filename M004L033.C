/*Write a program to print all 1 to 500 all armstrong number.
  Author:- Shubham Date:- Oct 19,2021 */
#include<stdio.h>
int main()
	{
		int armstrong,n, num, rem,i;
		printf("Enter the range:- ");
		scanf("%d",&n);
		for(i=2;i<=n;i++)
			{
				num=i;
				armstrong= 0;
				while (num!=0)
					{
						rem=num%10;
						armstrong =armstrong + rem*rem*rem;
						num /=10;
					}
				if(i==armstrong)
					{
						printf("\nEnter no is :- %d are armstrong number :- %d ",i,armstrong);
					}
			}
		
	}
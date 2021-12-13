/*write a program to menu driven Program which has following options:
  1. Factorial of a number.
  2. Prime or not.
  3. Odd or even
  4. Exit
  Author :- Shubham Date:-Nov 10, 2021 */
#include<stdio.h>
#include<conio.h>
int main()
	{
		int a,x,num,p,fact,prm;
		for(a=2;a>1;a++)
			{
				clrscr();
				printf("\n\nEnter what your choice.\n");
				printf("\n\n1. Find factorial.");
				printf("\n\n2. Check Prime number.");
				printf("\n\n3. Check even and odd.\n\n4. Exit.\n");
				scanf("%d", &x);
				switch(x)
				{
					case(1):
						printf("Enter the number of what you want to find the factorial :\n");
						scanf("%d", &num);
						fact=num;
						for(p=1;p<num;p++)
							fact=fact*p;
						printf("%d is the factorial.\n", fact);
						break;
					case(2):
						printf("Enter the number which you want to check whether it is prime or not : \n");
						scanf("%d", &num);
						for(p=2;p<num;p++)
							{
								if(num%p==0)
									{
										break;
									}
							}
						if(p==num)
							printf("Enter number  is %d is a prime number \n",num);
						else
							printf("Enter number  is %d is  Not  a  prime number \n",num);
						break;
					case(3):
						printf("Enter the number to check whether it is even or odd : ");
						scanf("%d", &num);
						if(num%2==0)
							printf("%d is an even number.\n", num);
						else
							printf("%d is odd odd number.\n", num);
						break;
					}
				if(x==4)
				{
					printf("\nOk BYe\n");
					break;
				}
				if(x!=1 && x!=2 && x!=3 && x!=4)
					printf("You have entered the wrong choice. Try Again!!\n");
				getch();
			}

		return 0;
	}
/*write a program to find the grace marks for a student using switch. The user should enter the class
obtained by the student and the number of subjects he has failed in.
	- If the student gets first class and the number of subjects he failed in is greater than 3, then he does not
	get any grace. If the number of subjects he failed in is less than or equal to 3, then the grace is of 5
	marks per subject.
	- If the student gets second class and the number of subjects he failed in is greater than 2, then he does
	not get any grace. If the number of subjects he failed in is less than or equal to 2, then the grace is of 4
	marks per subject.
	- If the student gets third class and the number of subjects he failed in is greater than 1, then he does
	not get any grace. If the number of subjects he failed in is equal to 1, then the grace is of 5 marks per
	subject.

Author :- Shubham Date:-Nov 10, 2021 */
#include<stdio.h>
#include<conio.h>
int main()
	{
		int class,fail,a;
		for(a=2;a>1;a++)
			{
				clrscr();
				printf("Enter the number of subjects student got failed = ");
				scanf("%d",&fail);
				printf("Enter the class =\n1. First class.\n2. Second class.\n3. Third class.\n4. Exit.\nSelect option : ");
				scanf("%d",&class);
			switch(class)
			{
			case 1:
				switch(fail)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							printf("You've got grace of 5 marks per subject");
						break;
						default:
							printf("You didn't got any grace");
						getch();
						break;
					}
				break;
			case 2:
				switch(fail)
					{
						case 0:
						case 1:
						case 2:
							printf("You've got grace of 4 marks per subject");
						break;
						default:
							printf("You didn't got any grace");
						getch();
						break;
					}
				break;
			case 3:
				switch(fail)
					{
						case 0:
						case 1:
							printf("You've got grace of 3 marks per subject");
						break;
						default:
							printf("You didn't got any grace");
						getch();
						break;
					}
					break;
			case 4:
				exit(0);

			default:
				 printf("Wrong Choice. Please try again!!");
				getch();
			}
		}
		return 0;
	}
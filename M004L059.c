/* Write a program to print this pattern
	    A
     ABA
    ABCBA
   ABCDCBA
		ABCBA
		 ABA
			A
 Author:- Shubham Date:- Oct 28,2021 */
#include<stdio.h>
int main()
	{
    int  ch=65,num,i,j,k;
    printf("Enter the  num :- ");
		scanf("%d",&num);
    for(i=1;i<=num;i++)
			{
        for(j=1;j<=num-i;j++)
					{
						printf(" ");
					}
				for(j=1;j<=i;j++)
					{
						printf("%c",ch++);
					}
        ch--;
				for(k=1;k<i;k++)
					{
						printf("%c",--ch);
					}
				printf("\n");
        ch=65;
			}
    for(i=num-1;i>=1;i--)
      {
        for(j=0;j<=num-1-i;j++)
					{
						printf(" ");
					}
        for(j=1;j<=i;j++)
          {
            printf("%c",ch++);
          }
        ch--;
        for(k=1;k<i;k++)
          {
            printf("%c",--ch);
          }
        printf("\n");
        ch=65;
      }

  }

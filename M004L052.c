/* Write a program to print this pattern
    1
   232
  34543
 4567654
567898765
 Author:- Shubham Date:- Oct 27,2021
  */
#include<stdio.h>
int main()
	{
		int i,j,right=1,left=0,num;
		printf("Enter the  num :- ");
		scanf("%d",&num);

		for(i=1;i<=num;i++)
			{
        for(j=1;j<=num-i;j++)
					{
						printf(" ");
					}
        for(j=i;j<=right;j++)
          {
            printf("%d",j);
          }
        right+=2;
        if(i!=1)
          {
            for(j=left;j>=i;j--)
              {
                printf("%d",j);
              }
          }
          left +=2;
				printf("\n");
			}
	}

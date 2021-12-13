/*Write a program to print all 1 to 100 all prime number.
  Author:- Shubham Date:- Oct 19,2021 */
#include<stdio.h>
#include<math.h>
int main()
	{
		int start_p, end_p,i,j;
    printf("Enter the value range start to check prime:- ");
    scanf("%d",&start_p);
    printf("\nEnter the value range end:- ");
    scanf("%d",&end_p);
    for(i=start_p;i<=end_p;i++)
      {
        for(j=2;j<i;j++)
          {
            if(i%j==0)
              {
                break;
              }
          }
        if(j==i)
          {
            printf("prime Number is :- %d \n",i);
          }
      }
    return 0;
  }
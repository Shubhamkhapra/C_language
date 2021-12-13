/*Write a program to print all nth number check  all prime number.
  Author:- Shubham Date:- Oct 19,2021 */
#include<stdio.h>
int main()
	{
		int n,num=0, i,j;
    printf("Enter the number to find prime numbers :- ");
    scanf("%d",&n);
    while(n>0)
      {
        for(j=2;j<=num;j++)
          {
            if(num%j==0)
              {
                break;
              }
          }
        if(j==num)
          {
            printf("prime Number is :- %d \n",j);
            n--;
          }
        num ++;
      }
    return 0;
  }
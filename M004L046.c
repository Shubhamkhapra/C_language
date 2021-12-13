/*Write a program to print this pattern.
*
* *
* * *
* * * *
* * * * *
  Author:- Shubham Date:- Oct 27 ,2021 */

#include<stdio.h>
int main()
  {
    int num,i,n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        for(num=1;num<=i;num++)
          {
            printf("* ");
          }
        printf("\n");
      }
    return 0;
  }
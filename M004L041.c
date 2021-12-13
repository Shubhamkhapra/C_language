//Write a program find out prime factor of given number .
//Author :- Shubham  Date:- Oct , 2020
#include<stdio.h>

int main()
   {
     int num,i;
     printf("Enter the number:- ");
     scanf("%d",&num);
     for(i=2;num>1;i++)
      {
        while(num%i==0)
          {
            printf(" %d ",i);
            num /=i;
          }
      }

   }
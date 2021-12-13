//Write a program to find the range of set numbers.
//Author :- Shubham  Date:- Oct , 2020
#include<stdio.h>
int main()
  {
    int num, small,large;
    char choice='y';
    printf("Enter the number:- ");
    scanf("%d",&num);
    large=small=num;
    while(choice=='y'||choice=='Y')
      {
        printf("Enter the number:- ");
        scanf("%d",&num);
        if(large<num)
          {
            large=num;
          }
        else
          {
            if(small>num)
              {
                small=num;
              }
          }
        printf("If you want to continue press y else enter any number :- ");
        fflush(stdin);       
        scanf("%c",&choice);
      }
    printf("\nRange of set numbers:- %d ",large-small);
    return 0;
  }
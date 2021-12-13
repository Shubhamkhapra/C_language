/*Write a program macro definitions for the following:
1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert an uppercase alphabet to lowercase.
4. To obtain the bigger of two numbers.

Author :- Shubham  Date:- Nov 23,2021 */
#include<stdio.h>
#include<stdlib.h>
#include"M004L080.h"
int  main() 

  {
    while (1)
      {
        char ch,ch1;
        int choice,a,b,abs,c=0;
        float am;
        // clrscr();
        printf("\n1: Find arithmetic mean of two numbers: \n\n");
        printf("2: find absolute value of a number: \n\n");
        printf("3: convert an uppercase character to lowercase: \n\n");
        printf("4: obtain the bigger of two numbers: \n");
        printf("\n5: Exit");
        printf("\nEnter your choice: \n");
        scanf("%d",&choice);
        switch(choice) 
          {
            case 1:
                  /* finding arithmetic mean of two numbers */
                  // clrscr();
                  printf("\neEnter 1st  numbers:\n ");
                  scanf("%d",&b);
                  printf("\nenter 2nd numbers:\n ");
                  scanf("%d",&b);
                  am=AM(a,b);        /* arithmetic mean */
                  printf("\nArithmetic mean = %f ",am);
                  break;
            case 2:
                  /* finding the absolute value of a number */
                  // clrscr();
                  printf("\nenter a number: ");
                  scanf("%d",&a);
                  if ABS(a,c)
                    abs=a*(-1);
                  else
                    abs=a;
                  printf("\nabsolute value = %d",abs);
                  break;
            case 3:
                  /* converting an uppercase character to equivalent lowercase */
                  // clrscr();
                  printf("\nenter an uppercase character: ");
                  scanf(" %c",&ch);
                  ch1=LOWER(ch);
                  printf("\nequivalent lowercase character = %c",ch1);
                  break;
            case 4:
                  /* finding the bigger of two numbers */
                  // clrscr();
                  printf("\neEnter 1st  numbers:\n ");
                  scanf("%d",&b);
                  printf("\nenter 2nd numbers:\n ");
                  scanf("%d",&b);
                  if BIG(a,b)
                    printf("\n\n%d is bigger.\n",a);
                  else
                    printf("\n\n%d is bigger.\n",b);
                  break;
            case 5:
              exit(0);
            default:
                  printf("\nWrong choice entered\n");
            }
      }
    //getch();

  }
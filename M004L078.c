/* Write a program to macros
1. To test whether a character is a small case letter or not.
2. To test whether a character is a upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of the macros you defined in 1 and 2 above.
4. To obtain the bigger of two numbers.
Author:- Shubham  Date:- Nov 23,2021 */
#include<stdio.h>
// #include<conio.h>
#define UPPER(x) (x>=65 && x<=90)
#define SMALL(y) (y>=97 && y<=123)
#define ALPHABET(z) (z>=65 && z<=90 || z>=97 && z<=123)
#define BIGGER(a,b) (a>b)

int  main() 
  { 
    while (1)
      {
        int i,d1,d2;
        char ch,ch1;
        //clrscr();
        printf("\t enter your choice: \n");
        printf("1: to test if character is small case letter or not\n\n");
        printf("2: to test if character is upper case letter or not\n\n");
        printf("3: to test if character is an alphabet or not\n\n");
        printf("4: to find bigger of two number\n\n\n");
        printf("5: exit\n\n\n");

        printf("choice: ");
        scanf("%d",&i);

        switch (i) 
        {
          case 1:
            // clrscr();
            printf("enter any character\n\n");
            scanf(" %c",&ch);
            if SMALL(ch)
              printf("\n\n it is a small case letter.\n");
            else
              printf("\n\nit is not a small case letter.\n");
            break;

          case 2:
            // clrscr();
            printf("enter any character\n\n");
            scanf(" %c",&ch);
            if UPPER(ch)
              printf("\n\nit is an upper case letter.\n");
            else
              printf("\n\nit is not an upper case letter.\n");
            break;

          case 3:
            // clrscr();
            printf("enter any character\n\n");
            scanf(" %c",&ch);
            if ALPHABET(ch)
              printf("\n\nit is an alphabet.\n");
            else
            printf("\n\nit is not an alphabet.\n");
            break;

          case 4:
            // clrscr();
            printf("enter Ist numbers\n\n");
            scanf("%d",&d1);
            printf("enter second numbers\n\n");
            scanf("%d",&d2);
            if BIGGER(d1,d2)
              printf("\n\n%d is bigger\n",d1);
            else
              printf("\n\n%d is bigger \n",d2);
            break;
          
          case 5:
            exit(0);
          default:
            printf("\nwrong choice entered\n");
        }
      }

  }
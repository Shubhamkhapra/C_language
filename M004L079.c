/*Write a program calculation of area and perimeter of a triangle, a square and
a circle. Store these macro definitions in a file called “areaperi.h”.

Author:- Shubham  Date:- Nov 23,2021 */

/*header file code:-
#define SI(a,b,c) ((a*b*c)/100.0)
#define AMOUNT(si,p) (si+p)
*/
#include<stdio.h>
#include"M004L079.h"
int main()
  {
    float p,t,r,si,amt;
    printf("\nEnter the principle \n");
    scanf("%f",&p);
    printf("\nTime in year\n");  
    scanf("%f ",&t);
    printf("\n rate  of interest \n");
    scanf("%f",&r);
    si=SI(p,t,r);
    amt=AMOUNT(si,p);
    printf("\nSimple intersest %f \n Amount : - %f",si,amt);
  }
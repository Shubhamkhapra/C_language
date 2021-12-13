/* Write a program to find  expanded per your expectation , how will you find out how is it being  expanded by the preprocessor.
Author:- Shubham  Date:- Nov 23,2021 */
#include<stdio.h>
#define  pi 3.141592
int main()
  {
    float r = 6.25 ;
    float area ;
    area = pi * r * r ;
    printf ( "\nArea of circle = %f", area );
    return 0;
  }
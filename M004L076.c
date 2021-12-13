/*write a program to create a function find greatest divisor numbers
  Author :- Shubham Date:-Nov 12, 2021 */
#include<stdio.h>
int gcd(int, int);
int main()
  {
    int a, b, cd, max, min;
    printf("Enter ist numbers : ");
    scanf("%d", &a); 
    printf("Enter 2nd numbers : ");
    scanf("%d",&b);
    if (a>b)//for making a greater number
      {
        max = a;
        min = b;
      }
    else
      {
        max = b;
        min = a;
      }
    a = max;
    b = min;
    printf("\na value is  %d, b value is %d", a,b);
    cd = gcd(a, b);//returning the greatest divisor
    printf("\nGreatest common divisor of the given numbers is %d", cd);
    return 0;
  }
int gcd(int a, int b)
  {
    static int x, temp;
    if (b == 0)
      {
        return (a);
      }
    x = a / b;
    temp = a;
    a = b;
    b = temp - x*b;
    gcd(a, b);
  }
/*write a program to create a function shift the value of x, y ,z
  Author :- Shubham Date:-Nov 12, 2021 */
#include<stdio.h>
int intChan(int*, int*,int*);
int main ()
  {
    int x,y,z;
    printf("Enter the value of x :- \n");
    scanf("%d",&x);
    printf("Enter the value of y :- \n");
    scanf("%d",&y);
    printf("Enter the value of z :- \n");
    scanf("%d",&z);
    printf("\nBefore inter change value is : x= %d, y= %d, z= %d ",x,y,z);
    intChan(&x,&y,&z);
    printf("\nAfter  inter change value is : x= %d, y= %d, z= %d ",x,y,z);
    return 0;
  }
int intChan(int *x, int *y, int *z)
    {
      int temp;
      temp = *z;
      *z=*y;
      *y=*x;
      *x=temp;
    }
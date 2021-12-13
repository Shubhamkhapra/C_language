/* 2 15 41 80 132 197 275 366 470 587 */
#include<stdio.h>
int main()
  {
    int i,a=2,n ;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
      {
          printf(" %d ", a);
          a +=13*i;  
      }
    
    return 0;
  }
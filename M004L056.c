/* Write a program to print this pattern
	    *
     ***
    *****
   *******
		*****
		 ***
			*
 Author:- Shubham Date:- Oct 28,2021 */
#include<stdio.h>
int main()
	{
    int  rows,n,i,j,k=0;
    printf("Enter number of Rows =");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
      { 
          if (rows%2==0)
              {
                if (i <=n ) 
                  {
                    k++;
              }
            if (i >n+1) //skip one row for even numbers 
              {
                k--;
              }
          }
        else
          {
            i<=n?k++:k--; //odd number no only middle single row
          }
            
          for(j=1;j<=rows;j++)
            {
              if(j>=n+1-k && j<=n-1+k)	
                {
                  printf("*");
              }
                
              else
                {
                  printf(" ");
              }
            }
        printf("\n");
      }

	}

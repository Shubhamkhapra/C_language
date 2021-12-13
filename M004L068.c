/*write a program to create a function return sum and average and standard deviation
  Author :- Shubham Date:-Nov 12, 2021 */
#include<stdio.h>
#include<math.h>
void calc(long int ,long int,long int , long int ,long int  ,long int*, long int*,float*);

int main()
  {
    long int n1,n2,n3,n4,n5,sum,avg;
    float std;
    printf("Enter the number N1:- \n");
    scanf("%ld",&n1);    
    printf("Enter the number N2:- \n");
    scanf("%ld",&n2);   
    printf("Enter the number N3:- \n");
    scanf("%ld",&n3);    
    printf("Enter the number N4:- \n");
    scanf("%ld",&n4);    
    printf("Enter the number N5:- \n");
    scanf("%ld",&n5);
    calc(n1,n2,n3,n4,n5,&sum,&avg,&std);
    printf("\nSum of number is %ld.\nAverage of number is %ld.\nStandard deviation is %.2f.",sum,avg,std);
    return 0;
  }
void calc(long int d1,long int d2,long int d3,long int d4,long int d5, long int *sum,long int *avg,float *std)
  { 
    *sum = d1+d2+d3+d4+d5;
    *avg= *sum/5;
    *std=pow(d1-*avg,2)+pow(d2-*avg,2)+pow(d3-*avg,2)+pow(d4-*avg,2)+pow(d5-*avg,2);
    *std=sqrt(*std/5);
  }

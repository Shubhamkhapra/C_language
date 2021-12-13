/* Write a program to find sum of  series
	[1+x^2/2!+x^4/4!+_____]
Author:- Shubham Khapra Date:- Nov 16,2021 */
#include<stdio.h>
#include<math.h>
// #include<conio.h>
double power(double,double);
double factorial(double);
double ser(double,double);
double ser1(double,double);

int main()
	{
		double x, n,s,s1;
		// clrscr();
		printf("Input the value of x:- \n");
		scanf("%lf",&x);
		printf("Input numbers of terms n:- ");
		scanf("%lf",&n);
		s=ser(x,n);
		printf("sum  sum using recursion is %lf\n",s);
		s1=ser1(x,n);
		printf("series sum using loop  %lf ", s1);

		// getch();
	}
// recursion method
double ser(double x, double n)
	{
		static double p=1,f=1;
		double r;
		if(n==0)
			return 1;
		else
			{
				r=ser(x,n-1);
				p=p*x;
				f=f*n;
				return r+p/f;
			}
	}
//for loop method
double ser1(double x, double n)
	{
		double p,f=1,sum =0;
		int i;
		for(i=1;i<=n;i++)
			{
				f=factorial(i);
				sum = sum + (power(x,i)/f);
			}
		sum +=1;
		return sum;
	}
double power(double x, double n)
	{
		int i,p=1;
		for(i=1;i<=n;i++)
			{
				p=x*p;
			}
		return p;
	}
double factorial(double x)
	{
		int i=1,f=1;
		for(i=1;i<=x;i++)
			{
				f=f*i;
			}
	 return f;
	}





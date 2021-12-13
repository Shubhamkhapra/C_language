#include<stdio.h>
//#include<conio.h>
int pri(int,int);
int printit(float,int);
int  main()
	{
		float a=3.14;
		int i=99;
		//clrscr();
		pri(i,a);
		printit(a,i);
		//getch();
	}
int pri(int i,float a)
	{
		printf("i=%d , a= %f\n ",i,a);
		printf("a=%a , i= %d \n",a,i);
		return 0;
	}
int printit(float a,int i)
//float a;
	{
		printf("a=%f , i= %d \n",a,i);
		printf("i=%d , a= %f \n",i,a);
		return 0;
	}

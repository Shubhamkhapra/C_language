#include<stdio.h>
// #include<conio.h>
int main()
{
	 long int num, rem, reverse_num, temp, start, end, count=0;
	//  clrscr();
	 printf("Enter the starting range: ");
	 scanf("%ld",&start);
	 printf("Enter the end range limit: ");
	 scanf("%ld",&end);
	 for(num=start;num<=end;num++)
	 {  
			temp=num;
			reverse_num=0;
			while(temp)
				{
					rem=temp%10;
					temp=temp/10;
					reverse_num=reverse_num*10+rem;
				}
			if(num==reverse_num)
				{
					count++;
				}
	 }
	 printf("Range %ld to  %ld are palindrome no is :- %ld \n",start,end,count);
	//  getch();
		return 0;
}
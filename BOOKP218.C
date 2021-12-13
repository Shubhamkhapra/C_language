#include<conio.h>
main()
	{
		int a=15;
		char ch='C';
		int k,m,f;
		clrscr();
		k=printf("hello");
		m=scanf("%d",&f);
		printf("\nscanf return value is %d \n",m);
		printf("\nk integer value %d \n",k);

		printit(a,ch);
		getch();

}

printit(a,ch)
	{
		printf("\n%d and char is %c \n",a,ch);
	}
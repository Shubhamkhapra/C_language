#include<stdio.h>
#include<conio.h>
void main()
	{
		 int a[20][20],b[20][20], sum=0, row, col, i,j;
		 clrscr();
		 printf("Enter the Row of array:- ");
		 scanf("%d",&row);
		 printf("Enter the coloum of array:- ");
		 scanf("%d",&col);
		 printf("\nFirst array values Enter");
		 for(i=0;i<row;++i)
			 {
					for(j=0;j<col;++j)
						{
							printf("\nArray Position a[%d][%d] :- ",i+1,j+1);
							scanf("%d",&a[i][j]);
						}
			 }
		/* printf("\nSecond array values Enter");
		 for(i=0;i<row;++i)
			 {
					for(j=0;j<col;++j)
						{
							printf("\nArray Position b[%d][%d] :- ",i+1,j+1);
							scanf("%d",&b[i][j]);
						}
			 }*/
		 printf("\nActual first Array print");
		 for(i=0;i<row;++i)
			{
				printf("\n");
				for(j=0;j<col;++j)
					{
						printf(" %d ",a[i][j]);
					}

			}
		/* printf("\nActual Second Array print");
		 for(i=0;i<row;++i)
			{
				printf("\n");
				for(j=0;j<col;++j)
					{
						printf(" %d ",b[i][j]);
					}

			}*/
		 for(i=0;i<row;++i)
			{
				sum += a[i][i];
			}
		/* printf("\nArray Diag print");
		 for(i=0;i<row;++i)
			{
				printf("\n");
				for(j=0;j<col;++j)
					{
						printf(" %d ",sum);
					}

			}*/
		 printf("\n diagnols %d ", sum);
		 getch();
	}
/*Write a program to fill the entire screen with diamond and heart alternatively. The ASCII value for heart is 3 and that of diamond is 4.*/



#include<stdio.h>
#include<conio.h>
main() {

int i,j;
clrscr();

for(i=j=1;i<=10000,j<=10000;i++,j++) {
printf("%c%c",4,3);
}

getch();
return 0;

}

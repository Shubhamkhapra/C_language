/*Write a program to produce the following output:

A B C D E F G F E D C B A
A B C D E F     F E D C B A
A B C D E           E D C B A
A B C D                 D C B A
A B C                        C B A
A B                               B A
A                                      A

*/

#include<stdio.h>
#include<conio.h>
main() {

int i,j,k,l;
clrscr();

for(i=71;i>=65;i--) {

/* loop for printing ascending letters */

for(j=65;j<=i;j++) {

printf("%c ",j);

}

/* loop for making a space between patterns */

for(k=i+1;k<=71;k++) {

if(k==71)
printf("  ");

if(k<71)
printf("    ");
}

/* loop to print descending letters */

for(l=i;l>=65;l--) {

if(l==71) {     /* to skip printing 'G' twice */
continue;
}

printf("%c ",l);

}
printf("\n");
}

getch();

return 0;
}

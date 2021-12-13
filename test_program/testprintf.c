#include<stdio.h>
int main()
  {
    int p,s, n;
    
    char h[26];
    p=printf("hello\n");
    printf("\nenter the value of scanf \n" );
    s=scanf("%s[^\n]",h);

    printf("\nprint return value is %d \n",p);
    printf("\nscanf return value is %d \n",s);
  }
#include<stdio.h>
int check(int);
void main()
  {
    int k=35,z;
    z=check(k);
    printf("z=%d",z);
    int z1=4;
    printf("%d",printf("%d %d",z1,z1));

  }
int check(int m)
    {
      // int m;
      if (m>40)
        return(!m++);
      else
        return (!++m);
    }
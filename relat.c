#include<stdio.h>
int main()
{
int x,y,z,a,b;
printf("\nenter two same numbers :\t");
scanf("%d%d",&x,&y);
z=x&y;
a=x|y;
b=x^y;
printf("\nAccording to given data if we perform following operations then we find this type of result :\n");
printf("------------------------------------------------------------\n");
printf("\n n&n =\t%d",z);
printf("\n n|n =\t%d",a);
printf("\n n^n =\t%d\n\n",b);
return 0;
}

#include<stdio.h>
int main()
{
int x,y;
printf ("Enter two numbers :\t");
scanf("%d%d",&x,&y);
printf("\nbefore swapping numbers are : a=\t%d\tb=\t%d\n",x,y);
x=x*y;
y=x/y;
x=x/y;
printf("\nafter swapping numbers are : a=\t%d\tb=\t%d\n",x,y);
return 0;
}

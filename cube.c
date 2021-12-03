#include<stdio.h>

int cube(int);

int cube(int n)
{
int cube;
cube=n*n*n;
return cube;
}

int main()
{
int n,x;
printf("Enter a number :-\t");
scanf("%d",&n);
x=cube(n);
printf("%d\n",x);
return 0;
}

#include<stdio.h>

int max(int,int);

int max(int a, int b)
{
if(a>b)
{
printf("Maximum number is :-\t%d\n",a);
printf("Minimum number is :-\t%d\n",b);
}
else
if(b>a)
{
printf("Maximum number is :-\t%d\n",b);
printf("Minimum number is :-\t%d\n",a);
}
}

int main()
{
int a,b;
printf("Enter two different numbers :-\t");
scanf("%d%d",&a,&b);
max(a,b);
return 0;
}

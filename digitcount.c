//To count digits of a number using while loop.

#include<stdio.h>

int main()
{
int n,count=0;

printf("Enter a number :-\t");
scanf("%d",&n);

while(n!=0)
{
n=n/10;
count++;
}
printf("%d\n",count);
return 0;
}

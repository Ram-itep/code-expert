//To print a multiplication table using while loop.

#include<stdio.h>

int main()
{
 int i,n,multi=0;
 i=1;
 
 printf("Enter a number :-\t");
 scanf("%d",&n);
 
 while(i<=10)
 {
 multi=i*n;
 printf("%d * %d = %d\n",n,i,multi);
 i++;
 }
 return 0;
 }

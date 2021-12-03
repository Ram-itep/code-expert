//To print a multiplication table using for loop.

#include<stdio.h>

 int main()
{
 int i,n,multi=0;
 
 printf("Enter a number :-\t");
 scanf("%d",&n);
 
 for(i=1;i<=10;i++)
 {
  multi=i*n;
  printf("%d * %d = %d\n",n,i,multi);
 }
 
 return 0;
 }

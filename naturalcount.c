//To calculate sum of natural numbers.

#include<stdio.h>

int main()
{
 int i,n,count=0;
 i=1;
 
 printf("Enter number of terms :-\t");
 scanf("%d",&n);

while(i<=n)
{
 count=count+i;
 i++;
}
 printf("%d\n",count);
 return 0;
}

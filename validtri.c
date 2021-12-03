//To check the triangle is valid or not.

#include<stdio.h>

int main()
{

 int a,b,c,sum;

 printf("Enter the first angle value of triangle :-\t");
 scanf("%d",&a);
 printf("Enter the second angle value of triangle :-\t");
 scanf("%d",&b);
 printf("Enter the third angle value of triangle :-\t");
 scanf("%d",&c);

 sum=a+b+c;

if(sum==180)
  printf("Triangle is valid\n");
else
  printf("Triangle is not valid.\n");
return 0;
}

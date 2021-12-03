//To check triangle is equilateral,isosceles or scalene.

#include<stdio.h>
int main()
{
 int side1,side2,side3;
 
 printf("Enter side of triangle :-\t");
 scanf("%d%d%d",&side1,&side2,&side3);
 
 if(side1==side2&&side2==side3)
 printf("Triangle is equilateral\n");
 
 else
 if(side1==side2 || side2==side3 || side3==side1)
  printf("Triangle is isoscale\n");
  
 else
 printf("Triangle is scalene\n");
 
 return 0;
}


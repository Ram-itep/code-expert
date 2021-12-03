//To calculate 3 power of a number.

#include<stdio.h>


int power(int);
 
 int power(int num)
 {
 
 printf("%d,%d,%d\n",num,num*num,num*num*num);
 
 }
 
 int main()
 {
 int num;
 printf("Enter the number :-\t");
 scanf("%d",&num);
 power(num);
 return 0;
 }

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number :\t");
scanf("%d",&a);
printf("\nEnter second number :\t");
scanf("%d",&b);
printf("Before swapping numbers are :\t a=%d and b=%d\n",a,b);
/*a=a*b;
b=a/b;
a=a/b;
a=a+b;
b=a-b;
a=a-b;*/
c=a;
a=b;
b=c;
printf("After swapping numbers are : \t a=%d and b=%d\n",a,b);
return 0;
}

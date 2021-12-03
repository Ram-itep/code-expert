//Odd or even//
#include<stdio.h>
int main()
{
int n;
printf("Enter a number :\t");
scanf("%d",&n);
if((n&1)==0)
printf("\n This number is even\n");
else
printf("\nThis number is odd \n");
return 0;
}

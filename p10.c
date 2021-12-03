#include<stdio.h>
int main()
{
int n;
printf("Enter a number from 1 to 7 :\t");
scanf("%d",&n);
if(n==1)
printf("\n First day of week : Monday\n");
if(n==2)
printf("\n Second day of week : Tuesday\n");
if(n==3)
printf("\n Third day of week : Wednesday\n");
if(n==4)
printf("\n Fourth day of week : Thursday\n");
if(n==5)
printf("\n Fifth day of week : friday\n");
if(n==6)
printf("\n Sixth day of week : saturday\n");
if(n==7)
printf("\n Seventh day of week : sunday\n");
if(n>=7)
printf("\nInvalid input please insert from 1 to 7\n");
return 0;
}


//leap year//
#include<stdio.h>
int main()
{
int year;
printf("Enter a year :\t");
scanf("%d",&year);
printf("\nYou have enterd \t%d year\n",year);
if(year%4==0)
printf("\nThis is a leap year\n");
else
printf("\nThis is not a leap year\n");
return 0;
}

//To check the days of a month.

#include<stdio.h>

int main()
{
 int choice;
 printf("Press month number from 1 to 12 to check the day of that month:-\t");
 scanf("%d",&choice);

switch(choice)
{
 case 1:printf("the first month of year is january and it has 31 days.\n");
 break;
 
 case 2:printf("the second month of year is February \n");
       int year;
       printf("First you have to enter year :-\t");
       scanf("%d",&year);
       
       if(year%4==0)
        printf("It has 29 days.\n");
       else
        printf("It has 28 days.\n");
       break;
       
case 3:printf("the third month of year is March and it has 31 days.\n");
break;

case 4:printf("the fourth month of year is April and it has 30 days.\n");
break;

case 5:printf("the fifth month of year is May and it has 31 days.\n");
break;

case 6:printf("the sixth month of year is june and it has 30 days.\n");
break;

case 7:printf("the seventh month of year is july and it has 31 days.\n");
break;

case 8:printf("the eightth month of year is August and it has 31 days.\n");
break;

case 9:printf("the ninth month of year is September and it has 30 days.\n");
break;

case 10:printf("the tenth month of year is October and it has 31 days.\n");
break;

case 11:printf("the eleventh month of year is November and it has 30 days.\n");
break;

case 12:printf("the twelth month of year is December and it has 31 days.\n");
break;

default:printf("Invalid input please try again\n");

}
return 0;
}

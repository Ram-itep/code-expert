//Electricity bill payment//
#include<stdio.h>
int main()
{
float bill,unit,total,charge;
printf("Enter unit of electricity meter :\t");
scanf("%f",&unit);
if(unit<=50)
{
bill = unit*0.50;
printf("\nUnit is less or equal to 50, so bill is :\t%.2f\n",bill);
}
else
if(unit<=150)
{
bill=unit*0.75;
printf("\nUnit is less or equal to 150, so bill is :\t%.2f\n",bill);
}
else
if(unit<=250)
{
bill=unit*1.20;
printf("\nUnit is less or equal to 250, so bill is :\t%.2f\n",bill);
}
else
if(unit>250)
{
bill =unit*1.50;
printf("\nUnit is greater to 250, so bill is :\t%.2f\n",bill);
}
charge=bill*20/100;
total=charge+bill;
printf("\nTotal bill is :%.2frupees\n",total);
return 0;
}

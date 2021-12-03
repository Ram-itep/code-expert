//Profit and loss//
#include<stdio.h>
int main()
{
float profit,loss,sp,cp,lper,pper;
printf("Enter cost price of value :\t");
scanf("%f",&cp);
printf("\nEnter selling price of a value :\t");
scanf("%f",&sp);
if(sp>cp)
{
profit=sp-cp;
printf("\nYou have %.2f rupees profit\n",profit);
pper=profit/cp*100;
printf("\nYou have %.2f percent profit\n",pper);
}
if(sp<cp)
{
loss=cp-sp;
printf("\nYou have %.2f rupees loss\n",loss);
lper=loss/cp*100;
printf("\nYou have %.2f percent loss\n",lper);
}
return 0;
}

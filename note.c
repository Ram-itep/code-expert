//Count electricity bill//
#include<stdio.h>
int main()
{
int totalUnit,x;
float billAmount=0;
printf("Enter Total Unit of bill\n");
scanf("%d",&totalUnit);
if(totalUnit>250)
{
x=totalUnit-250;
totalUnit=totalUnit-x;
billAmount=x*1.50;
}
if(totalUnit>=151 && totalUnit<=250)
{
x=totalUnit-150;
totalUnit=totalUnit-x;
billAmount=billAmount +(x*1.20);
}
if(totalUnit>=51 && totalUnit<=150)
{
x=totalUnit-50;
totalUnit=totalUnit-x;
billAmount=billAmount +(x*0.75);
}
if(totalUnit<=50)
{
billAmount=billAmount+(0.50)*totalUnit;
}
billAmount=(billAmount *20)/10;
printf("Total bill :%.2f\n",billAmount);

return 0;
}

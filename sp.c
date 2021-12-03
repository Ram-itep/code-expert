#include<stdio.h>
int main()
{
int p,t;
float r,sp;
printf("Enter the principle amount :\t\n");
scanf("%d",&p);
printf("Enter the rate :\t\n");
scanf("%f",&r);
printf("Enter the time limit :\t\n");
scanf("%d",&t);
sp=p*r*t/100;
printf("Simple interest is : \t%f",sp);
return 0;
}

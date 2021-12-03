//Temperature converter//
#include<stdio.h>
int main()
{
float c,celsi,f,faren;
char ch;
printf("Enter first letter of temperature :\t");
scanf("%c",&ch);
if(ch=='c' || ch=='C')
{
printf("\nEnter farenheit value :\t");
scanf("%f",&c);
faren =(c-32)*.5556;
printf("\n you have entered farenheit temperature :\t%.2f\n",c);
printf("\n converted into celsius :\t%.2f\n",faren);
}
if(ch=='f' || ch=='F')
{
printf("\nEnter celsius value :\t");
scanf("%f",&f);
celsi=(f*1.8)+32;
printf("\n you have entered celsius temperature :\t%.2f\n",f);
printf("\n converted into farenheit :\t%.2f\n",celsi);
}
return 0;
}

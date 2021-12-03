#include<stdio.h>
int main()
{
unsigned int bs;
float hra=0,da=0,gs=0;
printf("Enter the basic sallery of the employee :\t");
scanf("%u",&bs);
if(bs<=10000)
{
hra=bs*20/100.0f;
da=bs*80/100.0f;
gs=bs+hra+da;
printf("\nGross salary of the employee is :\t%.2f",gs);
printf("\nhra is =\t%.2f\n",hra);
//printf("ta is =\t%.2f\n",ta);//
printf("da is =\t%.2f\n",da);
}
if(bs<=20000)
{
hra=bs*25/100.0f;
da=bs*90/100.0f;
gs=bs+hra+da;
printf("\nGross salary of the employee is :\t%.2f",gs);
printf("\nhra is =\t%.2f\n",hra);
//printf("ta is =\t%.2f\n",ta);//
printf("da is =\t%.2f\n",da);
}
if(bs>20000)
{
hra=bs*30/100.0f;
da=bs*95/100.0f;
gs=bs+hra+da;
printf("\nGross salary of the employee is :\t%.2f",gs);
printf("\nhra is =\t%.2f\n",hra);
//printf("ta is =\t%.2f\n",ta);//
printf("da is =\t%.2f\n",da);
}
return 0;
}

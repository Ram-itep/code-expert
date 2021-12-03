#include<stdio.h>
int main()
{
printf("5%2 =\t%d",(5%2));
printf("4%2 =\t%d",(4%2));
printf("-5%2 =\t%d",(-5%2));
printf("5%-2 =\t%d",(5%-2));
printf("2%5 =\t%d",(2%5));
printf("0%5 =\t%d",(0%5));
printf("5%0 =\t%d",(5%0));
printf("5%-0 =\t%d",(5%-0));
printf("-0%5=\t%d",(-0%5));
printf("5%5 =\t%d",(5%5));
return 0;
}


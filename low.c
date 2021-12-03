//Lowest number//
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter four different numbers :\t");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
printf("\nLowest number is :\t%d\n",a);
else
{
if(b<c&&b<d)
printf("\nLowest number is :\t%d\n",b);
else
{
if(c<d)
printf("\nLowest number is :\t%d\n",c);
else
printf("\nLowest number is :\t%d\n",d);
}
}
return 0;
}

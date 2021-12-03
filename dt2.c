// mini calculator//
#include<stdio.h>
int main()
{
int a,b,sum,sub,multi,div,wS,wQ,p,q;
printf("Enter first number :\t");
scanf("%d",&a);
printf("\nEnter second number :\t");
scanf("%d",&b);
sum= a+b;
sub= a-b;
multi= a*b;
div= a/b;
wS= a*a+b*b+2*a*b;
wQ=a*a*a+b*b*b+3*a*b*(a+b);
p=a*a+b*b-2*a*b;
q=(a+b)*(a-b);
printf("\naddition of these numbers are: \t%d ",sum);
printf("\nsubtraction of these numbers are:\t%d ",sub);
printf("\nmultiplication of these numbers are:\t%d ",multi);
printf("\ndivision of these numbers are:\t%d ",div);
printf("\nwholesquare of these numbers are:\t%d ",wS);                                                                 
printf("\nwholecube of these numbers are:\t%d ",wQ);
printf("\napplied (a-b)^2 then answer is:\t%d ",p);
printf("\napplied a^2-b^2 then answer is:\t%d ",q);
return 0;
}

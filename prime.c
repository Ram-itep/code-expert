#include<stdio.h>
int main()
{
int n,i;
printf("Enter a number :\t");
scanf("%d",&n);
i=2;
while(i<=n/2)
{
if(n%i==0)
break;
i++;
}
if(i>n/2&&n>1)
printf("\nNumber is prime\n");
else
printf("\nNumber is not prime\n");
return 0;
}

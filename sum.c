#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a number");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==0)
sum =sum-i;
else
sum=sum+i;
i++;
}
printf("%d",sum);
return 0;
}

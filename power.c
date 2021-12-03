#include<stdio.h>
int main()
{
int x,n,sum=0,i=1,p,f=1;
printf("Enter a number :\t");
scanf("%d",&x);
printf("Enter value of n :\t");
scanf("%d",&n);
while(i<=n)
{
p=i;
f=1;
while(p!=0)
{
f=f*x;
p--;
}
sum=sum+f;
i++;
printf("%d",sum);
}
return 0;
}

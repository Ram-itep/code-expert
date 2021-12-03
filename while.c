/*#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("Enter a number :\t");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("%d",sum);
return 0;
}*/
//-------------------------------------//
//sum of 1,-2,3,-4,5............+-n//
#include<stdio.h>
int main()
{
int n,r,s=0,i=101;
while(i<=199){
n=i;
s=0;
while(n!=0){
r=n%10;
s=s*10+r;
n=n/10;
}
printf("%d\n",s);
i++;}
return 0;
}

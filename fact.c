#include<stdio.h>
int main()
{
float sum=0;
int i,num,f=1,n;
i=1;
while(i<=n)
{
num=i;
f=1;
while(num!=1)
{
f=f*num;
num--;
}
sum=sum+(float)i/f;
i++;
}
return 0;
}

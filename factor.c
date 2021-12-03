#include<stdio.h>
int main()
{
int i,n,f=1;
printf("Enter a number :\t");
scanf("%d",&n);
i=n;
while(i>1)
{
f=i*f;
i--;
}
printf("%d",f);
return 0;
}

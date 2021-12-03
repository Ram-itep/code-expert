#include<stdio.h>
int main()
{
int n,p,f=1;
printf("Enter a number :\t");
scanf("%d",&n);
printf("Enter power :\t");
scanf("%d",&p);
while(p!=0)
{
f=n*f;
p--;
}
printf("%d\n",f);
return 0;
}

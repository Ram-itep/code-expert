#include<stdio.h>
int main()
{
int i,n,c;
i=n;
printf("Enter number of terms :\t");
scanf("%d",&n);
while(i<=n)
{
//c=i*(i+1)/2;
//printf("%d\n",2*i);
i=i*n;
i--;
}
printf("%d\n",i);
return 0;
}

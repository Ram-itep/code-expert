/*#include<stdio.h>
int main()
{
int n,m;
printf("Enter two different numbers in ascending order :\t");
scanf("%d%d",&n,&m);
while(n<=m)
{
printf("%d\n\t",n);
n++;
}
return 0;
}
*/
#include<stdio.h>
int main()
{
int i,n,r;
i=1;
printf("Enter a number :\t");
scanf("%d",&n);
while(i<=0)
{
r=n%10;
//printf("%d\n",r);
i++;
}
printf("%d\n",r);
return 0;
}

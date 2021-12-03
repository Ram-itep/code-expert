#include<stdio.h>
int main()
{
int x,y;
x=123;
y=x%10;
printf("%d\n",y);
x=x/10;
printf("%d\n",x);
y=x%10;
printf("%d\n",y);
return 0;
}

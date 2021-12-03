#include<stdio.h>
int main()
{
int a,b,c,d,e;
a=20;
b=30; c=25; d=15,e=40;
a=c++;
c=d--;d=e++; e=--b; b=++b;
/*++a;
printf("++a = :%d\t");*/

printf("a = %d\t\n",a);
printf("b = %d\t\n",b);
printf("c = %d\t\n",c);
printf("d = %d\t\n",d);
printf("e = %d\t\n",e);
return 0;
}

#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter three differnt numbers :\t");
scanf("%d%d%d",&x,&y,&z);
printf("\n You have entered these numbers %d\t%d\t%d",x,y,z);
if(x>y&&x>z)
printf("\ngreater number is :\t%d",x);
else
{
if(y>z)
printf("\ngreater number is :\t%d",y);
else
printf("\n greater number is :\t%d\n",z);
}
return 0;
}

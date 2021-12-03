#include<stdio.h>
int main()
{
int a;
printf("Enter a number :\t");
scanf("%d",&a);
printf("\nYou have entered :\t%d",a);
if (a%2==0)
printf("\n\tNumber is even\n");
else
printf("\n\tNumber is odd\n");
return 0;
}

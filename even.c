// To check even or odd//
#include<stdio.h>

void evodd(int);

void evodd(int i)
{
 if (i%2==0)
 printf("\n\tNumber is even\n");
 else
 printf("\n\tNumber is odd\n");
}

int main()
{
 int a;
 printf("Enter a number :\t");
 scanf("%d",&a);
 printf("\nYou have entered :\t%d",a);
 evodd(a);
 return 0;
}

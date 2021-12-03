//check number is palindrome or not//
#include<stdio.h>
int main()
{
 int n,r,s=0,m;
 printf("Enter a number :\t");
 scanf("%d",&n);
 m=n;
while(n!=0)
{
 r=n%10;
 s=s*10+r;
 n=n/10;
 m==s;
}

if (m==s)
 printf("\nNumber is palindrome\n");
else
 printf("\nNumber is not palindrome\n");
return 0;
}

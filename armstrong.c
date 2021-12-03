//To check number is armstrong or not//

#include<stdio.h>

void armstrong(int);

void armstrong(int n)
	{
	 int r,temp=0,s=0;
	 temp=n;
	while(n!=0)
              {
		r=n%10;
 		s=s+r*r*r;
		n=n/10;
		}
	if(temp==s)
	printf("Number is armstrong\n");
	else
	printf("Number is not armstrong\n");
      }

int main()
{
 int n;
 printf("Enter a number :-\t");
 scanf("%d",&n);

 armstrong(n);
 return 0;
}

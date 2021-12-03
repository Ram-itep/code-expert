//To check number is divisible by 5 and 11 or not.
#include<stdio.h>

int main()
{
 int n, result;
 printf("Enter a number :-\t");
 scanf("%d",&n);
 
 if((n%5==0)&&(n%11==0))
  printf("number is divisible by 5 and 11 both.\n");
 else
  if((n%5==0)&&(n%11!=0))
    printf("number is only divisible by 5.\n");
    else
   if((n%5!=0)&&(n%11==0))
    printf("number is only divisible by 11.\n");
  else
    printf("Number is neither divisible by 5 nor 11.\n");
 return 0;
}
 

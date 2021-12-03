//To print a fibonacci series//

#include<stdio.h>

void fibonacci();

void fibonacci()
{
  int a,b,c,n;
  a=-1;
  b=1;
  printf("Enter limit :\t");
  scanf("%d",&n);
 do 
 {
  c=a+b;
  printf("%d\n",c);
  a=b;
  b=c;
  n--;
 }
while(n!=0);
}


int main()
{
  fibonacci();
  return 0;
}

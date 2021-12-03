//To count even and odd numbers in an array.

#include<stdio.h>

int main()

{
 int i,n,os=0,es=0;
 printf("Enter the limit of array :-\t");
 scanf("%d",&n);

 int a[n];

for(i=0;i<n;i++)
{
 printf("Enter %d element :-\t",(i+1));
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
  es=es+1;
  else
  os=os+1;
 }
 printf("=====================================\n");
 printf("Even numbers are :-\t%d\n",es);
 printf("Odd numbers are :-\t%d\n",os);
 }

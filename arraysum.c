//To print sum of all elements of an array.

#include<stdio.h>

int main()

{

 int a[100],n,i,sum=0;
 printf("Enter the size of array :-\t");
 scanf("%d",&n);

 for(i=0; i<n; i++)
  {
   printf("Enter %d element :-\t",(i+1));
   scanf("%d",&a[i]);
  }

 for(i=0; i<n; i++)
{
 sum=sum+a[i];
}
 printf("%d\n",sum);
 return 0;
 }

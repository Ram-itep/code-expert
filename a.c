//To Sort even and odd elements of the array separately.

#include<stdio.h>

void evenodd(int);

int main()
{
int i,n;
printf("Enter the size of array :-\t");
scanf("%d",&n);

int a1[n],a2[n],a3[n];

for(i=0;i<n;i++)
{
printf("Enter %d elements in array :-\t",i+1);
scanf("%d",&a1[i]);
}

for(i=0;i<n;i++)
{
if(a1[i]%2==0)
 a2[i]=a1[i];
 else
 a3[i]=a1[i];
 }
 
 printf("elements of  array a1 is :-\n");
 for(i=0;i<n;i++)
 printf("%d\n",a1[i]);
 
 printf("Elements of even array a2 is :-\n");
 for(i=0;i<n;i++)
 printf("%d\n",a2[i]);
 
 printf("Elements of odd array a3 is :-\n");
 for(i=0;i<n;i++)
 printf("%d\n",a3[i]);
 
 
 return 0;
 }

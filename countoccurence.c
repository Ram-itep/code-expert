//To count occurence of elements in an array.

#include<stdio.h>

int main()
{
int n,element,i,k=0;
printf("Enter the limit of array :-\t");
scanf("%d",&n);
int a[n], pos[n];

for(i=0;i<n;i++)
{
printf("Enter %d element :-\t",(i+1));
scanf("%d",&a[i]);
printf("Enter an element to search in array :-\t");
scanf("%d",&element);

for(i=0;i<n;i++)
{
if(a[i]==element)
{
pos[k]=i;
k++;
}
}
if(k!=0)
{
printf("Element found %d times at index.\n",k);
}
else
printf("Element not found.");
return 0;
}
}

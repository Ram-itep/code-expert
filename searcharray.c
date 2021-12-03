//To Search an element in an array.

#include<stdio.h>

int main()

{
 int i,n,ele,flag=0;
 printf("Enter the size of array :-\t");
 scanf("%d",&n);

 int a[n];

for(i=0;i<n;i++)
{
 printf("Enter %d elements in array :-\t",i+1);
 scanf("%d",&a[i]);
}

printf("\n\nEnter the search element :-\t");
scanf("%d",&ele);

for(i=0;i<n;i++)
{
 if(a[i]==ele)
 flag=1;
}
 if(flag)
 printf("\nElement found.\n");
 else
 printf("\nElement not found.\n");
 
 return 0;
}

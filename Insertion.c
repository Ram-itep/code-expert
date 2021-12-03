#include<stdio.h>
int main()
{
 int n,ele,i,pos;
 
 printf("Enter the limit of array :-\t");
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
 printf("Enter %d element :-\t",i+1);
 scanf("%d",&a[i]);
 }
 
 printf("Before entering new element values are :-\n");
 for(i=0;i<n;i++)
      printf("%d\n",a[i]);
 
 printf("Enter the position :-\t");
 scanf("%d",&pos);
 for(i=n-1;i>=pos;i--)
    {
     a[i+1]=a[i];
    }
    printf("Enter the element :-\t");
    scanf("%d",&ele);
    a[pos-1]=ele;
     n=n+1;
     /*for(i=0;i<n;i++)
     {
     if(a[i]==pos)
     {
     printf("Enter a number to insert :-\t");
     scanf("%d",&a[i]);
     }
     }*/
     
     printf("After insert a new element values are ;-\n");
     for(i=0;i<n;i++)
      printf("%d\n",a[i]);
 return 0;
}

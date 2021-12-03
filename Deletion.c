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
 
      printf("Before deleting values are :-\n");
      for(i=0;i<n;i++)
      printf("%d\n",a[i]);
 
 printf("Enter the position :-\t");
 scanf("%d",&pos);
 
 for(i=pos;i<n;i++)
    {
     a[i-1]=a[i];
    }
    
    a[pos-1]=ele;
     n=n-1;
     
     
     printf("After deletion values are ;-\n");
     for(i=0;i<n;i++)
      printf("%d\n",a[i]);
 return 0;
}

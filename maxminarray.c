//To print max and min element of an array.

#include<stdio.h>

int main()

{

 int n,i,max,min;
 printf("Enter the size of array :-\t");
 scanf("%d",&n);
 int a[n];
 max=a[0];
 min=a[0];

 for(i=0; i<n; i++)
  {
   printf("Enter %d element :-\t",(i+1));
   scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
  if(a[i]>max)
      max=a[i];
      else
        if(a[i]<min)
         min=a[i];
      }
      
      printf("Max element is :-\t%d\n",max);
      printf("Min element is :-\t%d\n",min);
      return 0;
      }

//To delete a specified position's element in array.

#include<stdio.h>
 
int main() 
{
    int a[100],i,n,pos;
 
    printf("\nEnter no of elements\n");    
    scanf("%d",&n);
    
    
    for (i=0;i<n;i++) 
    {
      printf("Enter %d elements:-\t",i+1);
      scanf("%d",&a[i]);
    }
    
    printf("Elements of array are\n");
    for(i=0;i<n;i++) 
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
 
    printf("Enter the position from which the number has to be deleted\n");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nAfter Deletion new array is\n");
    for(i=0;i<n;i++) 
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}

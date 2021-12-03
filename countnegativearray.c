//To count the negative elements of array.

 #include <stdio.h>
 
 
int main()
{
    int a[100],i,n,c=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    
    for(i=0; i<n; i++)
      {
        printf("Enter %d elements in array :- \t",i+1);
        scanf("%d", &a[i]);
      }
 
     for(i=0; i<n; i++)
    {
      if(a[i] < 0)
       c++;
    }
    printf("count  of negative numbers in array: %d\n",c);
 
    return 0;
}

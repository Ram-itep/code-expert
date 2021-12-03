//To print negative elements of array.

 #include <stdio.h>
 
 
int main()
  {
    int a[1000],i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    
     for(i=0; i<n; i++)
      {
        printf("Enter %d elements in array :- \t",i+1);
        scanf("%d", &a[i]);
      }
 
    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
     {
        if(a[i] < 0)
        {
         printf("%d\n", a[i]);
        }
     }
 
    return 0;
 }

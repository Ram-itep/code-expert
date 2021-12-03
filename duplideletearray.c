//To delete all duplicate elements in array.

#include <stdio.h>

int main()
{
   
    int n, i, j, k;       


    printf("Enter size of the array : ");
    scanf("%d", &n);
    
    int a[n];

    
    
    for(i=0; i<n; i++)
    {
      printf("Enter %d elements in array :-\t",i+1);
      scanf("%d", &a[i]);
    }


    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        { 
            if(a[i] == a[j])
            {
             for(k=j; k<n - 1; k++)
                {
                  a[k] = a[k + 1];
                }
                
                n--;
                
                j--;
            }
        }
    }
   
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
     printf("\n\n");
    return 0;
}

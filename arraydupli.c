//To count the duplicate elements of array.

#include <stdio.h>

int main()
{

    int n,i, j, size, count = 0;

   
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int a[n];
    
    for(i=0; i<n; i++)
    { 
      printf("Enter elements in array : ");
      scanf("%d", &a[i]);
    }

    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements are :- \t%d\n", count);

    return 0;
}

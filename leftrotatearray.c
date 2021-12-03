//To left rotate elements of array.

    #include <stdio.h>    
         
    int main()    
    {    
            
        
        int i,n;
        printf("Enter the size of array :-\t");
        scanf("%d",&n);
        
        int a[n];
        
        for(i=0;i<n;i++)
        {
         printf("Enter %d element in array :-\t",i+1);
         scanf("%d",&a[i]);
        }
           
        int m = (n/2)+1;    
            
          
        printf("Original array: \n");    
        for (i = 0; i<n; i++) {     
            printf("%d\n", a[i]);     
        }      
           int j, first;     
      /*  for(i=0; i<m; i++)         
                                       
        {         
            first = a[0];    
            
            for(j = 0; j<n-1; j++)
            {         
               a[j] = a[j+1];    
            }    
              a[j] = first;    
         }    
            
        printf("\n");  */  
        
        for(i=0;i<m;i++)
        {
        first =a[n-1];
        for(j=0; j<n-1;j++)
        {
        a[j]=a[j+1];
        }
        a[j]=first;
        }
        
        
        
        
        
        
            
            
        printf("Array after left rotation: \n");    
        for(i = 0; i<n; i++)
        {    
            printf("%d\n", a[i]);    
        } 
        
        printf("\n\n");   
        return 0;    
    }    

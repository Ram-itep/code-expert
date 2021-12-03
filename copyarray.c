 //TO copy all elements from an array to another array. 
  
    #include <stdio.h>    
         
    int main()    
    {    
         int i,n;
         printf("Enter the size of array :-\t");
         scanf("%d",&n);
          
        int a1[n],a2[n]; 
        
        for(i=0;i<n;i++)
        {
        printf("Enter %d elements of array :-\t",i+1);
        scanf("%d",&a1[i]);
        }   
            
        printf("Elements of original array: \n");    
        for (i = 0; i<n; i++) 
        {     
         printf("%d\n ", a1[i]);    
        }    
            
        printf("\n");  
        
           
        for ( i = 0; i<n; i++) 
        {     
         a2[i] = a1[i];     
        }      
            
        printf("Elements of copied array: \n");    
        for ( i = 0; i<n; i++) 
        {     
         printf("%d\n ", a2[i]);    
        }    
        return 0;    
    } 

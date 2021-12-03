//To reverse a string using function.

#include<stdio.h>
#include <string.h>
 
int main()
   {
    char s[100];  
    int i,n,count=0;
 
    printf("Enter first string :- \t");
    scanf("%s",s);
    
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	count++;
 
 	}
 	if(count==i)
 	    printf("string is palindrome");
           else
           printf("string is not palindrome");
   
    return 0;
}













// To check max between two numbers//

#include<stdio.h>


int max(int,int);


int max(int a,int b)
     {
      if(a>b)
      return a;
       else
        return b;
       }
        
        
        
 int main()
 {
  int a,b,x;
  printf("enter two different numbers :-\t");
  scanf("%d%d",&a,&b);
 
  x= max(a,b);
  printf(" Max number is :-\t%d\n",x);
  
  return 0;
 }

//To check max number among three//

#include<stdio.h>


int max(int,int,int);


int max(int a,int b,int c)
     {
      if(a>b&&a>c)
      return a;
       else
          if(b>c)
              return b;
           else
              return c;
        }
        
        
        
 int main()
 {
  int a,b,c,x;
  printf("enter three different numbers :-\t");
  scanf("%d%d%d",&a,&b,&c);
 
  x= max(a,b,c);
  printf(" Max number is :-\t%d\n",x);
  
  return 0;
 }

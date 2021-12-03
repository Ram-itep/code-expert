//To reverse a string using function.

#include<stdio.h>
#include <string.h>

char reverse(char s[])
{
  static char rev[100];
  int l,i=0;
 
  l=strlen(s)-1;
  while(l>=0)
       {
         rev[i++]=s[i--];
       }
       
 rev[i]='\0';
 return rev;
}


int main()
{
 char s[100];
 char *p;
 printf("Enter a string :-\t");
 scanf("%s",s);
 p=reverse(s);
 printf("Reverse :-%s\n",p);
 return 0;
}

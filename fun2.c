#include<stdio.h>
void ptrn();
void ptrn()
 {
  int i,j;
  for(i=1;i<=5;i++)
 {
   for(j=1;j<=5;j++)
   {
    if(j>=i)
    printf("*");
  else
 printf("\n");
}
  for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
  {
    if(j>=6-i)
    printf("*");
    else
   printf(" ");
   }
   printf("\n");
  }
  }
  }
int main()
{
ptrn();
printf("Print this pattern using function.\n");
return 0;
}

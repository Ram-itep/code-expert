//To find factorial //
#include<stdio.h>

void factorial();


void factorial()
 {
  int i,n,f=1;
  printf("Enter a number :\t");
  scanf("%d",&n);
  i=n;
  while(i>1)
          {
           f=i*f;
           i--;
          }
          printf("%d",f);
        }


int main()
{
 factorial();
 printf("\nKeep learning and keep exploring.\n");
 return 0;
}

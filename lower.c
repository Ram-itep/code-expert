//TO check lowercase, uppercase, special character and digit//
#include<stdio.h>

void typechar();


void typechar()
{
  char ch;
  //int a;
  
 // printf("press 1 to check upper and lower.")
  //printf("press 2 to check digit and special")
  printf("Enter a character\n");
  scanf("%c",&ch);

if (ch>='A'&&ch<='Z' )
    printf("\nCharacter is in uppercase\n");
else
if (ch>='a' && ch<='z')
       printf("\n Character is in lowercase\n");
else
if(ch>=0&&ch<=9)
    printf("This is a digit.\n");
else
    printf("This is a special character.\n");
}


int main()
{
typechar();
return 0;
}

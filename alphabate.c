//To check character is alphabate or not//
#include<stdio.h>

void typechar();


void typechar()
{
  char ch;
  
  printf("Enter a character\n");
  scanf("%c",&ch);

if (ch>='A'&&ch<='Z' ||ch>='a' && ch<='z')
    printf("\n This is an alphabate\n");
else
    printf("\nThis is not an alphabate\n");

}


int main()
{
typechar();
return 0;
}

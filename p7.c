#include<stdio.h>
int main()
{
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
if (ch>='A'&&ch<='Z' || ch>='a' && ch<='z')
printf("\nCharacter is alphabate\n");
else
printf("\n Character is not alphabate\n");
return 0;
}

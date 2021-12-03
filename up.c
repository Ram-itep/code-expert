#include<stdio.h>
int main()
{
char ch;
printf("Enter a character :\t");
scanf("%c",&ch);
if(ch>='A'&& ch<='Z')
{
ch=ch+32;
printf("Lowercase is :\t%c",ch);
}
else
printf("\nOnly uppercase input is valid\n");
return 0;
}

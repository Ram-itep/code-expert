//even or odd using switch case//
#include<stdio.h>
int main()
{
char n;
printf("Enter a number :\t");
scanf("%c",&n);
switch(n)
{
case 'a': printf("\n a is vowel\n");
break;
case 'e': printf("\n e is vowel\n");
break;
case 'i': printf("\n i is vowel\n");
break;
case 'o': printf("\n o is vowel\n");
break;
case 'u': printf("\n u is vowel\n");
break;
case 65: printf("\n A is vowel\n");
break;
case 'E': printf("\n E is vowel\n");
break;
case 'I': printf("\n I is vowel\n");
break;
case 'O': printf("\n O is vowel\n");
break;
case 'U': printf("\n U is vowel\n");
break;
default : printf("This is not a vowel\n");
}
return 0;
} 

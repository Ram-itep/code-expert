//Simple Calculator 
#include<stdio.h>
int main()
{
char choice;
int a,b,c;
printf("Enter your choice in only 5 form");
printf("\n---------------------------------\n");
printf("\nPress + to perform addition\n");
printf("\nPress - to perform Subtraction\n");
printf("\nPress * to perform Multiplication\n");
printf("\nPress / to perform Division\n");
printf("\nPress %% to perform Modulous\n");
scanf("%c",&choice);
switch(choice)
{
case '+':printf("\nEnter two numbers :\t");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nAddition is :\t%d\n",c);
break;
case '-':printf("Enter two numbers :\t");
scanf("%d%d",&a,&b);
c=a-b;
printf("\nSubtraction is  :\t%d\n",c);
break;
case '*' :printf("\nEnter two numbers :\t");
scanf("%d%d",&a,&b);
c=a*b;
printf("\nMultiplication is  :\t%d\n",c);
break;
case '/':printf("\nEnter two numbers :\t");
scanf("%d%d",&a,&b);
c=a/b;
printf("\nDivision is :\t%d\n",c);
break;
case '%':printf("\nEnter two numbers :\t");
scanf("%d%d",&a,&b);
c=a%b;
printf("\nRemainder is :\t%d\n",c);
break;
default : printf("\nInvalid input\n");
}
return 0;
}


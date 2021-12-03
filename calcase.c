#include<stdio.h>
int main()
{
int n;
printf("Enter a number between 1 to 7 :\t");
scanf("%d",&n);
switch(n)
{
case 1:printf("First day of the week is Monday\n");
break;
case 2:printf("Second day of the week is Tuesday\n");
break;
case 3:printf("Third day of the week is Wednesday\n");
break;
case 4:printf("Fourth day of the week is Thursday\n");
break;
case 5:printf("Fifth day of the week is Friday\n");
break;
case 6:printf("Sixth day of the week is Saturday\n");
break;
case 7:printf("Seventh day of the week is Sunday\n");
break;
default : printf("Invalid Input");
}
return 0;
}


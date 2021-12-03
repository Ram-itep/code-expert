//To check whether a number is even or odd using a switch case.

#include<stdio.h>

int main()
{
int a,choice;
printf("Enter a number :-\t");
scanf("%d",&a);
printf("Press 1 to check even,odd or zero.\n");
printf("Please enter your choice :-\t");
scanf("%d",&choice);

switch(choice)
{
 case 1: if(a==0)
          printf("Number is zero\n");
          else 
           if(a%2==1)
           printf("Number is odd\n");
           else
           printf("Number is even\n");
  }
          
return 0;
}

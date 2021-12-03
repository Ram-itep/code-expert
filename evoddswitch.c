//To check whether a number is even or odd using a switch case.

#include<stdio.h>

int main()
{
int a choice;
printf("Enter a number :-\t");
scanf("%d",&a);
printf("Press 1 to check even or odd\n");
printf("Please enter your choice :-\t");
scanf("%d",&choice);

switch(choice)
{
 case 1: if(a%2==0)
          printf("Number is even");
          else
          printf("Number is odd");
  }
          
return 0;
}

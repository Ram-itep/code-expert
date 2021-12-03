//To find maximum number using switch case.

#include<stdio.h>

int main()
{
int min,max,num1,num2,choice;

printf("Press 1 to find the max number between two numbers.\n");
printf("Press 2 to find the min number between two numbers.\n");
printf("Please enter your choice :-\t");
scanf("%d",&choice);
printf("\n=======================================================\n");

switch(choice)
{
case 1:printf("Enter first number :-\t");
       scanf("%d",&num1);
       printf("Enter second number :-\t");
       scanf("%d",&num2);
       
       if(num1>num2)
         printf("Greater number is :-\t%d\n",num1);
         else
         printf("Greter number is :-\t%d\n",num2);
         printf("\n=======================================================\n");   
         break;
         
 case 2:printf("Enter first number :-\t");
       scanf("%d",&num1);
       printf("Enter second number :-\t");
       scanf("%d",&num2);
       
       if(num1<num2)
         printf("Minimum number is :-\t%d\n",num1);
         else
         printf("Minimum number is :-\t%d\n",num2);
         printf("\n=======================================================\n");
         break; 
  }
  
  return 0;
  }       
         
         
         
         
         
              

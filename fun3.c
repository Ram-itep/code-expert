#include<stdio.h>
int a,b;
void add();
void sub();
void multi();
void div();


void add()
 	{
 	printf("Enter first number :\t");
	scanf("%d",&a);
	printf("Enter the second number :\t");
	scanf("%d",&b);

  	 printf("the addition of these numbers is :\t%d\n",a+b);
  	 printf("Happy coding\n");
 	}
 	
  	
void sub()
 	{
 	printf("Enter first number :\t");
	scanf("%d",&a);
	printf("Enter the second number :\t");
	scanf("%d",&b);

  	 printf("the subtraction of these numbers is :\t%d\n",a-b);
  	 printf("Happy coding\n");
 	}
 	
void multi()
       {
        printf("Enter first number :\t");
	scanf("%d",&a);
	printf("Enter the second number :\t");
	scanf("%d",&b);

        printf("the multiplication of these numbers is :\t%d\n",a*b);
        printf("Happy coding\n");
       }
      

void div()
       {
        printf("Enter first number :\t");
	scanf("%d",&a);
	printf("Enter the second number :\t");
	scanf("%d",&b);

        printf("the division of these numbers is :\t%d\n",a/b);
        printf("Happy coding\n");
       } 
    
int main()
 {
  int a,b;
  int choice;
  printf("Press 1 to addition\n");
  printf("press 2 to subtraction\n");
  printf("Press 3 to multiplication\n");
  printf("press 4 to division\n");
  printf("Enetr your choice :-\n");
  scanf("%d",&choice);


switch(choice)
{
case 1:
      printf("------------------------------------\n");
      add();
      break;
      
case 2:      
      printf("------------------------------------\n");
      sub();
      break;
      
case 3:
      printf("------------------------------------\n");
      multi();
      break;
case 4:
      printf("------------------------------------\n");
      div();
      break;
    }
    
    printf("------------------------------------\n");
    printf("Main function terminate..\n");
  return 0;
 }

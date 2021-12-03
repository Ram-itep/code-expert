#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice;
long int  amount, bal=100000;
do
{
printf("Press 1 for check balance\t");
printf("\nPress 2 for Withdrawal\t");
printf("\nPress 3 for deposite\t");
printf("\nPress 4 for exit from account\t");
printf("\nPlease enter your choice :\t");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("your current balance is :\t%ld\n",bal);
break;
case 2: printf("\nEnter amount :\t");
        scanf("%ld",&amount);
        if(amount<=bal)
        {
        printf("\nCollect your money");
        bal=bal-amount;
        printf("Remaining balance is :\t%ld\n",bal);
        }
        else
        printf("/nInsufficient amount/n-----please try again-----/n");
        break;
case 3:printf("\nEnter amount which you want to deposite in your account :\t");
	scanf("%ld",&amount);
	bal=amount+bal;
	printf("\nyour total balance is :\t%ld\n ",bal);
	break;
case 4 : exit(0);
}
}
while(1);

  return 0;
  }      C

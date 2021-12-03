#include<stdio.h>
int main()
{
float age,AgeInSeconds;
printf("Enter youe age :\t");
scanf("%f",&age);
AgeInSeconds=365*24*60*60*age;
printf("\nYou have lived for %.1fseconds in your life\n",AgeInSeconds);
return 0;
}

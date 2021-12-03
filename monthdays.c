//To print the days of a month using switch case.

#include <stdio.h>

int main()
{
    int month;

    
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: printf("1st month is january\n");
            printf("31 days\n");
            break;
        case 2: printf("2nd month is February\n");
            printf("28/29 days\n");
            break;
        case 3: printf("3rd month is March\n");
            printf("31 days\n");
            break;
        case 4: printf("4th month is April\n");
            printf("30 days\n");
            break;
        case 5: printf("5th month is May\n");
            printf("31 days\n");
            break;
        case 6: printf("6th month is June\n");
            printf("30 days\n");
            break;
        case 7: printf("7th month is July\n");
            printf("31 days\n");
            break;
        case 8: printf("8th month is August\n");
            printf("31 days\n");
            break;
        case 9: printf("9th month is September\n");
            printf("30 days\n");
            break;
        case 10: printf("10th month is October\n");
            printf("31 days\n");
            break;
        case 11: printf("11th month is November\n");
            printf("30 days\n");
            break;
        case 12: printf("12th month is December\n");
            printf("31 days\n");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}

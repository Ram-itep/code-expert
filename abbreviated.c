//To convert a name into abbreviated form.

#include <stdio.h>

void abbreviate();

void abbreviate()

{

   char fname[20], mname[20], lname[20];
    printf("Enter full name (first middle last):-\t ");

     scanf("%s %s %s", fname, mname, lname);

    

     printf("Abbreviated name:-\t ");

     printf("%c. %c. %s\n", fname[0], mname[0], lname);

}

int main()

{
 abbreviate();
    
     return 0;
}

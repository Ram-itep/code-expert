//Student Result//
#include<stdio.h>
int main()
{
 int physics,chemistry,maths,biology,comp,obt;
 float per,total;
 
 printf("\nEnter the marks of subject Physics :\t");
 scanf("%d",&physics);
 
 printf("Enter the marks of subject mathematics :\t");
 scanf("%d",&maths);
 
 printf("\nEnter the marks of subject Biology :\t");
 scanf("%d",&biology); 

 printf("\nEnter the marks of subject computer :\t");
 scanf("%d",&comp);
 
 printf("\nEnter the marks of subject Chemistry :\t");
 scanf("%d",&chemistry);
 
 obt = physics+biology+maths+chemistry+comp;
 
 printf("\nobtained mark is %d",obt);
 printf("\nEnter total of all subjects: \t");
 scanf("%f",&total);
 
 per= obt/total*100;
 printf("\npercentage of : \t%.2f %\n",per);

if(per>=90)
printf("\nstudent passed with grade A\n");

 if(per>=80&&per<=89)
  printf("\nstudent passed with grade B\n");

 if (per>=70&&per<=79)
  printf("\nstudent passed with grade C\n");

 if (per>=60&&per<=69)
  printf("\nstudent passed with grade D\n");

 if (per>=40&&per<=59)
  printf("\nstudent passed with grade E\n");

 if(per<40)
  printf("student passed with grade F\n");

return 0;
}

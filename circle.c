//To calculate area and circumference of circle// 
#include<stdio.h>
void area();
void circumference();
void diameter();


void area()
  {
   float r,pi=3.14f,area;
   printf("Enter the radius of circle :-\t");
   scanf("%f",&r);
   area=pi*r*r;
   printf("area of circle is :-\t%0.2f\n",area);
  }
  
void circumference()
  {
   float r,pi=3.14f,circum;
   printf("Enter the radius of circle :-\t");
   scanf("%f",&r);
   circum=2*pi*r;
   printf("circumference of circle is :-\t%0.2f\n",circum);
  }
  
  void diameter()
  {
  float r,diameter;
  printf("Enter the radius of circle :-");
  scanf("%f",&r);
  diameter=2*r;
  printf("Diameter of the circle is :-\t%0.2f\n",diameter);
  }
  
int main()
 {
   int a;    
   printf("Press 1 for area of circle.");
   printf("\nPress 2 for circumference of circle.");
   printf("\nPress 3 for diameter of circle.");
   printf("\nEnter your choice :-\t");
   scanf("%d",&a);
   switch(a)
   {
    case 1: area();
            break;  
    case 2 : circumference();
            break;
    case 3: diameter();
            break;
    }        
    printf("\n------HAPPY LEARNING------\n\n");
    return 0;
  }

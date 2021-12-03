#include<stdio.h>
int main()
{
float pi=3.14f,radius,area,cir;
printf("Enter the value of radius :\t");
scanf("%f",&radius);
area= pi*radius*radius;
cir=2*pi*radius;
printf("Area of circle is : \t%.2f\n",area);
printf("circumference of circle is :\t%.2f\n",cir);
return 0;
}
                                                                                                                 

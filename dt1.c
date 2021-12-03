//fomatted strings//
#include<stdio.h>
int main()
{
signed int a;
long int b;
short int c;
unsigned int d;
char e;
signed char f;
unsigned char g;
float h;
double i;
long double j;
printf("signed integer occupied:\t %dbytes\n", sizeof(a));
printf("long integer occupied:\t %dbytes\n", sizeof(b));
printf("short integer occupied:\t %dbytes\n", sizeof(c));
printf("unsigned integer occupied:\t %dbytes\n", sizeof(d));
printf("character occupied:\t %dbytes\n", sizeof(e));
printf("signed character occupied:\t %dbytes\n", sizeof(f));
printf("unsigned character occupied:\t %dbytes\n", sizeof(g));
printf("float occupied:\t %dbytes\n", sizeof(h));
printf("double occupied:\t %dbytes\n", sizeof(i));
printf("long double occupied:\t %dbytes\n", sizeof(j));
return 0;
}

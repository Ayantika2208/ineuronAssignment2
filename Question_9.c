//9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
   int a,b;
   float d,f;
   char g,h;
   double y,z;
   b=sizeof(a);
   f=sizeof(d);
   h=sizeof(g);
   z=sizeof(y);
   printf("\n%d",b);
   printf("\n%0.2f",f);
   printf("\n%d",h);
   printf("\n%lf",z);
   return 0;

}
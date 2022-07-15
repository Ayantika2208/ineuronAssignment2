/* Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
   int  num,n,l;
   printf("Enter a number: ");
   scanf("%d",&num);
   /*method 1
   n=num/10;
   l=num%10;
   num = n*10;
   printf("The number now is %d",num);*/
   //method 2
   n = num/10;
   l = num%10;
   l=0;
   num = n*10+l;
   printf("The number now is %d",num);
   return 0;

}
/* Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
   int num ,n,g=0 ;
   printf("Enter a number and a digit:");
   scanf("%d %d",&num,&n);
   g= num*10+n;
   printf("The new number is %d",g);
   return 0;

}
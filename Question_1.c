//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num%10;
    printf("The unit digit of %d is %d.",num,n);
    return 0;
    

}

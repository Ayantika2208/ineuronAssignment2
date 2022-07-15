//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);//a=2,b=3
    a=a+b;//a=5
    b=a-b;//b=5-3=2
    a=a-b;//5-2=3
    printf("Values of a and b after swapping are %d %d.",a,b);//a=3,b=2
    return 0;


    

}

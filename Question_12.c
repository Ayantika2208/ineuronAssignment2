/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter amount in (INR):");
    scanf("%f",&INR);
    USD = ((1/76.23)*INR);
    printf("The amount %0.2f INR in USD is %0.2f USD",INR,USD);
    return 0;

}
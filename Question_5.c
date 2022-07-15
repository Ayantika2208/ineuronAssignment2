//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num,n,m,l,g,sum=0;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);//num=123
    n=num%10;//n=3
    m=num/10;//m=12
    l=m%10;//l=2
    g=m/10;//g=1
    sum=n+l+g;//1+2+3=6
    printf("The sum of digits of the 3 digit number %d is %d.",num,sum);

    
    return 0;
    

}
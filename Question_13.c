/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int n,x,y,z,l,g;
    printf("Enter a 3 digit number : ");
    scanf("%d",&n);//123=>312
    x=n%10;//123%10=3
    y=n/10;//123/10=12
    z=y%10;//12%10=2
    l=y/10;//12/10=1
    g=(x*100)+(l*10)+z;
    printf("%d",g);//312
    return 0;

}
/* Write a program to check whether the given number is even or odd using a bitwise
operator.*/
//Technique - Masking=>(number)operator(mask).eg= (6)&(1).

#include<stdio.h>
int main()
{
    int num,result; 
    printf("Enter  a number : ");
    scanf("%d",&num);//3,binary of 3 is 011.
    result = num&1;//011 & 001=001,so LSB of result is 1,means odd,anf is the LSB becomes 0 for some other number then it's even.
    if(result == 1)
    
        printf("The  number is  odd.");
    
    else 
        printf("The number is even.");
    return 0;
}
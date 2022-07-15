//7. Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int n,result=0,count =0;
    printf("Enter a number: ");
    scanf("%d",&n);//4,in binary = 0100.
    
    while(n!=0)
    {
        result = n&1;//4&1=0100 & 0001
        count++;//It's very imp to write count outside the if block because if this parameter is written inside the if block it will get skipped each time when 1 will not be present in the LSB and thus proper counting of the position will not take place.
        if(result == 1)
        {
           
            printf("\nThe position of the first 1 in LSB of the given number is %d.",count);
            break;
        }
        n = n>>1;
    }
    return 0;

}
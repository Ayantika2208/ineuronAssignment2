//Write a program to print a given number without its last digit.
int main()
{
    int num,n,m;
    printf("Enter a number:");
    scanf("%d",&num);
    m=num/10;
    n=num%10;
    printf("The number %d without its last digit is %d.",num,m);
    return 0;
    //incase u want to print the number without its last 2 digits then do num/100.
    //incase u want to print the number without its last 3 digits then do num/1000.
}
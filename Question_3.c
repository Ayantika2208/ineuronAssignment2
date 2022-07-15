//3. Write a program to swap values of two int variables
int main()
{
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);//a=2,b=3.
    c=a;//c=2
    a=b;//a=3
    b=c;//b=2
    printf("The values of a and b after swapping %d and %d.",a,b);
    return 0;
    

}
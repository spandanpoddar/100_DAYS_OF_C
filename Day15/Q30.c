#include<stdio.h>
int main()
{
    int n,rev=0,rem;//n-for the number to be reversed, rev-for the reversed number, rem-for the remainder
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("reversed number is: %d\n",rev);
}
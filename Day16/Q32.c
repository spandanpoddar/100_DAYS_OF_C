#include<stdio.h>
int main()
{
    int n,rev=0,rem,bk;//n-for the number to be reversed, rev-for the reversed number, rem-for the remainder,bk-to take backup of the number
    printf("enter a number:");
    scanf("%d",&n);
    bk=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(bk==rev)
    {
        printf("the number is palindrome\n");
    }
    else
    {
        printf("the number is not palindrome\n");
    }
    
}
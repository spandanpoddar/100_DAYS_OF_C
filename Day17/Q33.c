#include<stdio.h>

int main()
{
    int n,bk,rem,s=0;//n-for the number ,rem-for the remainder,bk-to take backup of the number
    printf("enter a number:");
    scanf("%d",&n);
    bk=n;

    while(bk!=0)
    {
        
        rem=bk%10;
        s=s+(rem*rem*rem);
        bk/=10;
    }
    if(n==s)
    {
        printf("the number is armstrong\n");
    }
    else
    {
        printf("the number is not armstrong\n");
    }
    
}
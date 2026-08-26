#include<stdio.h>
int main()
{
    int d,b=0,r,rev=0;//d-number in decimal,b-converted number in binary,r-to take reminder
    printf("enter a decimal number:");
    scanf("%d",&d);
    while(d!=0)
    {
        r=d%2;
        b=r+b*10;
        d=d/2;
    }
    while(b!=0)
    {
        r=b%10;
        rev=rev*10+r;
        b=b/10;
    }
    printf("binary equivalent: %d",rev);
}
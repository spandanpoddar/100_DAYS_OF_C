#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    printf("sum of digits is %d",s);
    return 0;
}
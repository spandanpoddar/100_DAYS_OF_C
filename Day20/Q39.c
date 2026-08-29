#include<stdio.h>
int main()
{
    int n,r,m=1;
    printf("enter a number:");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
        {
            m*=r;
        }
        n/=10;
    }
    printf("product of odd digits is %d",m);
    return 0;
}
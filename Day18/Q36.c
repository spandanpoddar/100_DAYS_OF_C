#include<stdio.h>
int main()
{
    int n1,n2,r;//n1-for the first number ,n2-for the second number, r-for the remainder
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);

    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    printf("GCD is %d\n",n1);
    return 0;
}
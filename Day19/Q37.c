#include<stdio.h>
int main()
{
    int n1,n2,bk1,bk2,lcm=1;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    bk1=n1;
    bk2=n2;

    for(int i=2;i<=n1 && i<=n2;i++)
    {
        while(n1%i==0 && n2%i==0)
        {
            lcm*=i;
            n1/=i;
            n2/=i;
        }
    }
    lcm*=n1*n2;
    printf("LCM of %d and %d is %d",bk1,bk2,lcm);
    return 0;
}
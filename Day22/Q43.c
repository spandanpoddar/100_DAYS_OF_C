#include<stdio.h>
int main()
{
    int n,bk,s=0,r,f=1;
    printf("enter a number:");
    scanf("%d",&n);
    bk=n;

    while(bk!=0)
    {
        r=bk%10;
        for(int i=1;i<=r;i++)
        {
            f*=i;
        }
        s+=f;
        f=1;
        bk/=10;
    }
    if(s==n)
    {
        printf("%d is a strong number\n",n);
    }
    else
    {
        printf("%d is not a strong number\n",n);
    }
}
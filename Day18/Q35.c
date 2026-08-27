#include<stdio.h>
int main()
{
    int n,f;//n-for the number ,f-for the factors
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d is a factor of %d\n",i,n);
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,m=1;//n-for the range of numbers, m-for the product of even numbers
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            m*=i;
        }
    }
    printf("product of even numbers from 1 to %d is %d\n",n,m);
}
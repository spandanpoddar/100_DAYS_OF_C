#include<stdio.h>
int main()
{
    int n,l,s=0,a=1;//n-for how many odd numbers, l-for the last number, s-for the sum of odd numbers, a-for the first odd number
    printf("enter a number:");
    scanf("%d",&n);
    l= 2*n-1;

    for(int i=1;i<=l;i++)
    {
        if(i%2!=0)
        {
            s=n*(a+l)/2;
        }
    }
    printf("sum of 1st n odd numbers is: %d\n",s);
}
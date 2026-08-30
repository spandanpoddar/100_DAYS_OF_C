#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,rem,ld,bk,s=0,sb=0,p,pw,m,ts,ta;
    printf("enter a number:");
    scanf("%d",&n);
    bk=n;

    while(bk!=0)
    {
        rem=bk%10;
        c++;
        bk=bk/10;
    }
    bk=n;
    ld=bk%10;
    p=pow(10,c-1)*rem;
    sb=n-p;

    pw=pow(10,c-1)*ld;


    s=sb+pw;
    ta=s-ld;

    ts=ta+rem;


    printf("the reversed number is: %d", ts);
}
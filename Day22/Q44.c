#include<stdio.h>
int main()
{ 
    int n;
    double s=0,nu,de;
    printf("enter value till which the loop shall run for the sum series:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            s+=1.0;
        }
        else
        {
            nu=2*i-1;
            de=2*i;
            s+=nu/de;
        }
    }
    printf("the sum of the series is: %lf",s);
}
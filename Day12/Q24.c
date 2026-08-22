#include<stdio.h>
int main()
{
    int ec,e,e1,e2,te;
    printf("enter total unit of electricity consumed:");
    scanf("%d",&ec);

    if(ec<=100)
    {
        printf("bill is: %d\n", ec*5);
    }
    else if (ec>100 && ec<=200)
    {
        e = 100*5;
        e1 = (ec-100)*7;
        te = e+e1;
        printf("bill is: %d\n", te);
    }
    else if (ec>200 && ec<=300)
    {
        e = 100*5;
        e1 = 100*7;
        e2 = (ec-200)*10;
        te = e+e1+e2;
        printf("bill is: %d\n", te);
    }
    else
    {
        printf("bill is: %d\n", (ec*12));
    }
}
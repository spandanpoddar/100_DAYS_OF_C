#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("the number is not prime\n");
    
    }
    else
    {
        for(int i=2;i<= sqrt(n);i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
            
        }
        if(c == 0)
        {
            printf("the number is prime\n");
        }
        else
        {
            printf("the number is not prime\n");
        }
    }
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,place=1,result=0;
    printf("enter a binary number:");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        
        if(r==0)
        {
           result+=1*place;
        }
        else if(r==1)
        {
            result+=0*place;
        }
        place*=10;
        n/=10;
    }
    printf("1st equivalent is %d\n",result);
}
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("size of n:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("enter value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%p \n",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf(":%d\n",arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        s+=arr[i];
    }

    printf("sum of array elements: %d",s);
}
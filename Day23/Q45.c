#include<stdio.h>
int main()
{
  int n,nu=2,de=3;
  double s=0.0;
  printf("enter value till which the loop shall run for the sum series:");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    s+=(double)nu/de;
    nu+=2;
    de+=4;
  }
  printf("the sum of the series is: %lf",s);
}
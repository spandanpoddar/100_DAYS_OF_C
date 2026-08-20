#include<stdio.h>
int main()
{
 double sp,cp,v,p,l;//sp-selling price, cp-cost price v-for profit and loss p-profit percentage, l-loss percentage
 printf("enter the selling price:");
 scanf("%lf",&sp); 

 printf("enter the cost price:");
 scanf("%lf",&cp);

v=sp-cp;
if (sp>cp)
{
  p=(v/cp)*100;
  printf("profit percentage is: %lf\n",p);
}
else if (cp>sp)
{
  l=(-v/cp)*100;
  printf("loss percentage is: %lf\n",l);
}
else
{
  printf("no profit and no loss\n");
}
}
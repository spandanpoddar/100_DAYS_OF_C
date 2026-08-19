#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,xp,xn;

    printf("enter value of a:");
    scanf("%lf",& a);

    printf("enter value of b:");
    scanf("%lf",& b);

    printf("enter value of c:");
    scanf("%lf",& c);

    xp= (-b + sqrt(b*b-4*a*c))/(2*a);
    xn= (-b - sqrt(b*b-4*a*c))/(2*a);

    if(xp>0 || xn>0)
    {
       printf("real roots and different: %lf %lf\n", xp,xn);
    }

   else
   {
    printf("roots are not real and not differentiable: %lf %lf\n", xp,xn);
   }
}

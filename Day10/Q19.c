#include<stdio.h>
int main()
{
    double P,B,H; //P-perpendicular B-base H-height
     printf("enter perpendicular length:");
     scanf("%lf",& P);

     printf("enter base length:");
     scanf("%lf",& B);

     printf("enter height length:");
     scanf("%lf",& H);

     if (P==B && P==H)
     {
        printf("Equilateral triangle");
     } 
     else if (P ==B || P==H ||B==H )
     {
        printf("Isosceles triangle");
     }
     else
     {
      printf("Scalene triangle");
     }
     
     
}
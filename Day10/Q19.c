#include<stdio.h>
int main()
{
    double P,B,H; //P-perpendicular B-base H-height
     printf("enter perpendicular length:");
     sscanf("%lf",& P);

     printf("enter base length:");
     sscanf("%lf",& B);

     printf("enter height length:");
     sscanf("%lf",& H);

     if (P==B && P==H)
     {
        printf("Equilateral triangle");
     } 
     else if (P ==B || P==H ||B=H )
     {
        printf("Isosceles triangle");
     }
     else
     {
      printf("Scalene triangle");
     }
     
     
}
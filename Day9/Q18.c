#include<stdio.h>
int main()
{
   double m;
   printf("enter marks in percentage obtained:");
   scanf("%lf",& m);

   if(m>=90 && m<=100)
   {
    printf("Grade A");
   }
   else if (m>=80 && m<=89)
   {
    printf("Grade B");
   }
   else if (m>=70 && m<=79)
   {
    printf("Grade C");
   }
   else if (m>=60 && m<=69)
   {
    printf("Grade D");
   }
   else if (m>=60)
   {
    printf("Grade F");
   }
   else
   {
    printf("Wrong Choice");
   }
   
   
   
   
}
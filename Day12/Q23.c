#include<stdio.h>
int main()
{
    int d,f,f1,f2,tf; //d-how late the person is to submit a book back to the library
    printf("enter the number of days late:");
    scanf("%d",&d);

   if(d<=5)
   {
    printf("fine is: %d\n", d*2);
   }
   else if (d>5 && d<=10)
   {
    f = 5*2;
    f1 = (d-5)*4;
    tf = f+f1;
    printf("fine is: %d\n", tf);
   }
   else if (d>10 && d<=30)
   {
    f = 5*2;
    f1 = 5*4;
    f2 = (d-10)*6;
    tf = f+f1+f2;
    printf("fine is: %d\n", tf);
   }
   else
   {
        printf("membership is cancelled\n");
    }

}
#include<stdio.h>
int main()
{
    double n1,n2;
    char operations;

    printf("enter two numbers:\n");
    scanf("%lf %lf", &n1, &n2);

    printf("operations are:\nA-addition\nS-subtraction\nM-multiplication\nD-division\nO-modulus\n");
    printf("enter operation:");
    scanf(" %c", &operations);
    
    switch (operations)
    {
      case 'A':
        printf("sum is: %lf\n", n1 + n2);
        break;
      case 'S':
        printf("difference is: %lf\n", n1 - n2);
        break; 
      case 'M':
        printf("product is: %lf\n", n1 * n2);
        break;
      case 'D':
        printf("quotient is: %lf\n", n1 / n2);
        break;
      case 'O':
        printf("modulus is: %lf\n", (double)((int)n1 % (int)n2));
        break;
      default:
        printf("invalid operation\n");
    }
}
#include <stdio.h>
#include <conio.h>
#include <math.h>

float a, b, c, d;

#define f(x) a *x *x *x + b *x *x + c *x + d


void main()
{

    float x0, x1, x2, f0, f1, f2, e;

    printf("Enter the value of a,b,c,d in equation ax^3+bx^2+cx+d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Input the range
    printf("Enter the initial root of equation: \n");
    scanf("%f %f", &x0, &x1);

    // error
    printf("Enter the possible error: ");
    scanf("%f", &e);

    f0 = f(x0);
    f1 = f(x1);

    printf("\tx2\n");

    while ((fabs(x1 - x0) / x1) > e)
    {
    

        x2 = x1 -((f1*(x1-x0))/(f1-f0));

        x0 = x1;
        x1 = x2;

        f0 = f1;
        f2 = f(x2);
        f1 = f2;

        printf("\t%f\n" ,x2);

    }
    printf("\n\nThe required root of equation is %8.3f", x2);
}
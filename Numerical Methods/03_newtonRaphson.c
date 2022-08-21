#include <stdio.h>
#include <conio.h>
#include <math.h>

float a, b, c, d;

#define f(x) a *x *x *x + b *x *x + c *x + d
#define df(x) 3 *a *x *x + 2 *b *x + c  


void main()
{

    float x0, x1, f0, df0, f1, e;

    printf("Enter the value of a,b,c,d in equation ax^3+bx^2+cx+d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Input the range
    printf("Enter the initial root of equation: \n");
    scanf("%f", &x0);

    // error
    printf("Enter the possible error: ");
    scanf("%f", &e);


    printf("\tx1\t\tf(x1)\n");


    do
    {
    
        f0 = f(x0);
        df0 = df(x0);
        
        x1 = x0 - (f0/df0);
        f1 = f(x1);

        x0 = x1;

        printf("\t%f\t\t%f\n" ,x1);

    }while(f1>e);


    //Alternative way:
    // while(1)
    // {
    
    //     f0 = f(x0);
    //     df0 = df(x0);
        
    //     x1 = x0 - (f0/df0);
    //     if((fabs(x1 - x0) / x1) > e)
    //         x0 = x1;
    //     else
    //         break;
        
    //     printf("\t%f\n" ,x1);

    // }

    printf("\n\nThe required root of equation is %8.3f", x1);
}
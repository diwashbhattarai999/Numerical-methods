#include <stdio.h>
#include <conio.h>
#include <math.h>

float a, b, c, d;

#define f(x,y) x*x + x*y - 6
#define g(x,y) x*x - y*y -3
#define fdx(x,y) 2*x + y
#define fdy(x,y) x
#define gdx(x,y) 2*x
#define gdy(x,y) -2*y


void main()
{

    float x0, y0, x1, y1, f, g, f1, f2, g1, g2, e, D, Dx, Dy;

    // Input the range
    printf("Enter the initial root of equation: \n");
    scanf("%f %f", &x0, &y0);

    // error
    printf("Enter the possible error: ");
    scanf("%f", &e);


    printf("\tx1\t\ty1\n");

    while(1){

        f = f(x0,y0);
        g = g(x0,y0);
        f1 = fdx(x0,y0);
        f2 = fdy(x0,y0);
        g1 = gdx(x0,y0);
        g2 = gdy(x0,y0);

        D = f1*g2 - f2*g1;

        Dx = f*g2 - g*f2;
        Dy = g*f1 - f*g1;

        x1 = x0 - Dx/D;
        y1 = y0 - Dy/D;

        if((fabs(x1-x0) < e) && (fabs(y1-y0) < e))
            break;
        else{
            x0 = x1;
            y0 = y1;
        }

        printf("\t%f\t\t%f\n" ,x1, y1);

    }

    printf("The roots are: \n %f and %f", x1, y1 );


}
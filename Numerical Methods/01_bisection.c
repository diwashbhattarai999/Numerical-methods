#include<stdio.h>
#include<conio.h>
#include<math.h>

float a,b,c,d;

#define f(x) a*x*x*x + b*x*x + c*x + d

float avg(float a, float b) { return (a+b)/2; }

void main(){

    float x0,x1,x2,f0,f1,f2,e;

    printf("Enter the value of a,b,c,d in equation ax^3+bx^2+cx+d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    //Input the range
    printf("Enter the initial root of equation: \n");
    scanf("%f %f", &x0, &x1);

    //error
    printf("Enter the possible error: ");
    scanf("%f", &e);

    f0 = f(x0);
    f1 = f(x1);

    if(f0*f1 > 0){
        printf("Roots does not lies between %d and %d", x0, x1);
    }
    else{
        
        printf("   x0\t\t\t    x1\t\t\t    x2\t\t\t\t    f(x2)\n");

        while((fabs(x1-x0)/x1)>e){
            x2 = avg(x0,x1);
            f2 = f(x2);

            if(f0*f2>0){
                x0 = x2;
            }
            else{
                x1 = x2;
            }
            printf("%f \t\t %f \t\t %f \t\t\t %f\n",x0,x1,x2,f2);
        }
        printf("\n\nThe required root of equation is %8.3f", x2);

    }
    



}
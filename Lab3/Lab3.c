//LAB3: [TO FIND APPROXIMATION ROOT OF NON-LINEAR EQUATION 
//xlogv[10]x-12.2=0 ACCURATE TO FOUR DECIMAL PLACES APPLYING 
//NEWTON-RAPHSON METHOD IN C PROGRAMMING.]
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) (x * log10(x) - 12.2)
#define df(x) (log10(x) + (1 / log(10))) // Derivative of f(x)

int main() {
    double x0, x1, e;
    int i = 1;

    printf("Enter the initial guess x0: ");
    scanf("%lf", &x0);

    printf("Enter the tolerance error: ");
    scanf("%lf", &e);

    printf("---------------------------------------------------------------------------\n");
    printf("Iteration\tx0\t\tf(x0)\t\tdf(x0)\t\tx1\n");
    printf("---------------------------------------------------------------------------\n");

    do {
        x1 = x0 - (f(x0) / df(x0));
        printf("%d\t\t%lf\t%lf\t%lf\t%lf\n", i, x0, f(x0), df(x0), x1);

        if (fabs(x1 - x0) < e) {
            break;
        }

        x0 = x1;
        i++;
    } while (1);

    printf("---------------------------------------------------------------------------\n");
    printf("\nThe approximate root is %lf\n", x1);

    return 0;
}
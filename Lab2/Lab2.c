#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For fabs()

#define f(x) (exp(x) - (10 * x))

int main() {
    float x1, x2, x3, e;
    int i = 1;

    printf("Enter the initial guesses x1 and x2: ");
    scanf("%f %f", &x1, &x2);

    printf("Enter the tolerance error: ");
    scanf("%f", &e);

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("Iteration\tx1\t\tx2\t\tx3\t\tf(x1)\t\tf(x2)\t\tf(x3)\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");


R:  x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

    printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\n", i, x1, x2, x3, f(x1), f(x2), f(x3));

    if (fabs((x3 - x2) / x3) > e) {
        x1 = x2;
        x2 = x3;
        i++;
        goto R;
    }

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tThe approximate root is %f\n", x3);

    return 0;

}

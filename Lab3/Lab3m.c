#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) (exp(x) - (10 * x))

int main() {
    float x1, x2, x3, e;
    int i = 1;

    printf("Enter the initial guesses x1 and x2: ");
    scanf("%f %f", &x1, &x2);

    printf("Enter the tolerance error: ");
    scanf("%f", &e);

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| Iteration |      x1     |      x2     |      x3     |     f(x1)   |     f(x2)   |     f(x3)   |\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");

    do {
        x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        printf("| %8d   | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f |\n", i, x1, x2, x3, f(x1), f(x2), f(x3));
        x1 = x2;
        x2 = x3;
        i++;
    } while (fabs((x3 - x2) / x3) > e);

    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tThe approximate root is %10.6f\n", x3);

    return 0;
}

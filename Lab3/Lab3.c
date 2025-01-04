//LAB3: [TO FIND APPROXIMATION ROOT OF NON-LINEAR EQUATION 
//xlogv[10]x-12.2=0 ACCURATE TO FOUR DECIMAL PLACES APPLYING 
//NEWTON-RAPHSON METHOD IN C PROGRAMMING.]
#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x*log10(x)-1.2;
}
float df(float x)
{
    return log10(x)+0.43429;
}

int main()
{
    int iter, maxmiter;
    float h, x0, x1, terr;
    printf("\nEnter x0:");
    scanf("%f", &x0);
    printf("\nEnter the tolerance error:");
    scanf("%f",&terr);
    printf("\nEnter maximum iteration:");
    scanf("%d",&maxmiter);
    for(iter=1; iter<=maxmiter; iter++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf("At Iteration no. %d. X= %f\n", iter, x1);
        if(fabs(h)<terr)
        {
            printf("After %d iterations, root= %f\n",iter,x1);
            return 0;
        }
        x0=x1;
    }
    printf("The required solution doesn't converge or iterations are insufficient\n");
}
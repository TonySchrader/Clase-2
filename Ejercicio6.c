#include <stdio.h>
#include <math.h>

void main()
{
 float x, fx;

    printf("Ingrese el valor de x: \n");
    scanf("%f", &x);

    if (x <= 0)
    {
        fx = x + 3;
    }
    else
    {
        fx = (x * x) + (2 * x);
    }

    printf("El valor de f(x) es: %.2f\n", fx);
}

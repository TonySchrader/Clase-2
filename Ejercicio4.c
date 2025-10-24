#include <stdio.h>
#include <math.h>

void main()
{
    int num1, num2;

    printf("Escriba el primer numero: \n");
    scanf("%d", &num1);

    printf("Escriba el segundo numero: \n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El primer numero es mayor\n");
    }
    else if (num2 > num1)
    {
        printf("El segundo numero es mayor\n");
    }
    else
    {
        printf("Ambos numeros son iguales\n");
    }
}

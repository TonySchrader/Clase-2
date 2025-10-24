/*Schrader Rodtriguez Luis Antonio
clase 2 ejercicio 1*/
#include <stdio.h>
#include <math.h>

void main()
{
    const float precio = 7.0;
    int edad;
    float total;

    printf("Ingrese su edad: \n");
    scanf("%d", &edad);

    if (edad < 5)
    {
        total = precio * 0.40; // 60% de descuento
    }
    else if (edad > 60)
    {
        total = precio * 0.45; // 55% de descuento
    }
    else
    {
        total = precio;
    }

    printf("El precio de su entrada es: %.2f euros\n", total);
}

#include <stdio.h>
#include "calculadora.h"

int main(void)
{
    float numero1;
    float numero2;
    float resultado;
    int opcion;

    printf("=== CALCULADORA ===\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");

    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    switch (opcion)
    {
        case 1:
            resultado = sumar(numero1, numero2);
            break;

        case 2:
            resultado = restar(numero1, numero2);
            break;

        case 3:
            resultado = multiplicar(numero1, numero2);
            break;

        case 4:
            resultado = dividir(numero1, numero2);
            break;

        default:
            printf("Opcion no valida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
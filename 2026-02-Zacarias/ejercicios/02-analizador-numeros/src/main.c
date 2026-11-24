#include <stdio.h>
#include "analizador.h"
int main(void){
    int numero;
    int divisor;
    printf("Ingrese un numero:\n");
    scanf("%d", &numero);
    printf("Ingrese un divisor:\n");
    scanf("%d", &divisor);
    printf("El numero %d \n", numero);
    printf("%d\n", obtener_signo(numero));
    printf(" %d \n", es_par(numero));
    printf(" %d \n", es_multiplo(numero, divisor));

    return 0;
}
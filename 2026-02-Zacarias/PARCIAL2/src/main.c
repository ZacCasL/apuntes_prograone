#include "funciones.h"
int main (void){
    int opciones;
    int dig;
    int numero;
    int salto;
    for(;;){
    printf("================ MENU PRINCIPAL ===============\n");
    printf("1.Analizar los digitos impares\n");
    printf("2.Generar serie regresiva\n");
    printf("Salir\n");
    printf("Selecciona una opcion\n");
    scanf("%d",&opciones);
    if(opciones < 1 || opciones > 3){
        printf("Opcion invalida\n");
        return 0;
    }
    switch(opciones){
        case 1: {
            printf("Ingrese un numero: ");
            scanf("%d", &dig);
            printf("La suma de los digitos impares es: %d\n", sumadigim(dig));
            printf("La cantidad de numeros impares es:%d\n",contarimpar(dig));
            break;
        }
        case 2: {
           printf("Ingresa tu numero para iniciar tu serie\n");
           scanf("%d",&numero);
           printf("Ingresa el salto de tu serie\n");
           scanf("%d",&salto);
           printf("%d\n",mostrar(numero,salto));
           printf("%d\n",contmo(numero,salto));
           printf("%D\n",summo(numero,salto));
            break;
        }
        case 3:
            printf("Adios\n");
            return 0;
    }
}
    return 0;
}
#include "funciones.h"
int main(){
 int numero;
 int opcion;
 int sum;
 int nega;
 int total;
 for(;;){
 printf("=========MENU=========\n");
 printf("1. Generar serie\n");
 printf("2. Analizar un numero\n");
 printf("3. Analizar una lista de numeros\n");
 printf("4. Salir\n");
 
 printf("Seleccione una opcion de el menu\n");
 scanf("%d", &opcion);
 if(opcion > 4){
    printf("Comando no identificado repita"); 
    break;
 }
 switch(opcion){
    case 1:
    printf("Elige un numero entero positivo\n");
    scanf("%d", &numero);
    printf("%d\n", masme(numero));
    sum = sumterpos(numero);
    printf("%d\n",sum); 
    nega = sumtermen(numero);
    total = sum + nega;
    printf("%d\n",total);
    break;
    case 2:
 }
} 
return 0;
    }
   


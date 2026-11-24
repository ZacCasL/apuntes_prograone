#include <stdio.h>
#include "while.h"

int main(void){
int num;
int div;
printf("Ingrese un numero:");
scanf("%d",&num);
if(num<0){
    return 0;
}
printf("Ingrese un divisor:\n");
scanf("%d",&div);
printf("La suma es: %d\n",sumar_hasta(num));
printf("La cantidad de pares es: %d\n",contar_pares(num));
printf("La cantidad de multiplos es: %d\n",contar_multiplos(num,div));
printf("La suma de multiplos es: %d\n",sumar_multiplos(num,div));

return 0;
}
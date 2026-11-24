#include "sumpares.h"
#include <stdio.h>
int main(){
    int val;
    int buscado;
printf("Cuantas cosas guardaras en nuestra caja?\n");
scanf("%d", &val);
int caja[val];
printf("Pon lo que tienes en nuestra caja\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
printf("La suma de los pares es: %d\n", sumpares(val,caja));
printf("La suma de los impares es: %d\n", sumimpar(val,caja));
    return 0;
}
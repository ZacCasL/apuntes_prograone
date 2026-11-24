
#include "par.h"

int main(){
    int val;
printf("Cuantas cosas guardaras en nuestra caja?\n");
scanf("%d", &val);
int caja[val];
printf("Pon lo que tienes en nuestra caja\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
int pares = es_par(val,caja);
int impares =es_impar(val,caja);
    return 0;
}
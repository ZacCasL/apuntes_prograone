#include "posicion.h"

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
printf("Cual buscas?\n");
scanf("%d", &buscado);
int encontrado = buscaposi(val,caja,buscado);
    return 0;
}
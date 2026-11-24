#include "compar.h"
int main(){
    int val;
printf("Cuantas cosas guardaras en nuestra caja?\n");
scanf("%d", &val);
int caja1[val];
int caja2[val];
int resultado[val];
int com;
printf("Pon lo que tienes en nuestra caja\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja1[i]);
}
for(int i=0; i<val; i++){
    printf("El valor en la caja es: %d\n", caja1[i]);
}
printf("Pon lo que tienes en nuestra cajita\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja2[i]);
}
for(int i=0; i<val; i++){
    printf("El valor en la cajita es: %d\n", caja2[i]);
}
  com = comparar(val, caja1, caja2);

    return 0;
}
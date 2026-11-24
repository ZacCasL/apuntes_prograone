#include "posmayorpro.h"
int main(){
    int val;
    int mayor; 
    int menor;
printf("Cuantas cosas guardaras en nuestra caja?\n");
scanf("%d", &val);
int caja[val];
printf("Pon lo que tienes en nuestra caja\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
for(int i=0; i<val; i++){
    printf("El valor en la caja es: %d\n", caja[i]);
}
float suma=sum(val,caja);
float prom=suma/val;
printf("El promedio es: %.2f\n", prom);
mayor=mayorpromedio(val,caja,prom);
menor=menorpromedio(val,caja,prom);
    return 0;
}
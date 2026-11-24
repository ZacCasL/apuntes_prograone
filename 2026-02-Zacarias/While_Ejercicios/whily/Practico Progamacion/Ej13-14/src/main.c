#include "mayx.h"

int main(){
    int val;
    int compar;
printf("Cuantas cosas guardaras en nuestra caja?\n");
scanf("%d", &val);
int caja[val];
printf("Pon lo que tienes en nuestra caja\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
printf("Con que numero quieres comparar?\n");
scanf("%d", &compar);
int comparacion = es_mayormenor(val,caja,compar);
    return 0;
}

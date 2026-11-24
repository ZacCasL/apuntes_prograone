#include <stdio.h>
#include "ordenador.h"
int main(){
int val;
printf("Ingrese la longitud de este\n");
scanf("%d", &val);
int caja[val];
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
printf("%d", mayor(val, caja));
    return 0;
}
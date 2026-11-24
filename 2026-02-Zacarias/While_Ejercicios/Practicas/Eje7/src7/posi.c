#include <stdio.h>
#include "cont.h"
int main(){
int val;
printf("Ingrese la longitud de este\n");
scanf("%d", &val);
int caja[val];
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
}
printf("Los positivos son:%d", conta(val,caja));
printf("\nTenemos %d ceros", cer(val,caja));
    return 0;
}
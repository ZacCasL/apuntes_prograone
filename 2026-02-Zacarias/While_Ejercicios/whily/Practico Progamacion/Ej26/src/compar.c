#include "compar.h"
int comparar(int N, int caja[], int cajita[]){
    for(int i=0; i<N ; i++){
    if(caja[i]==cajita[i]){
      printf("Los valores son iguales en la posicion %d\n", i+1);
    }else if(caja[i] != cajita[i]){
      printf("El valor de las cajas son diferentes en la posicion %d\n", i+1);
    } 
}
    return 0;
}
#include "sumcaj.h"
int sum(int N, int caja[], int cajita[]){
    int suma[N];
    for(int i=0; i<N ; i++){
    suma[i]=caja[i]+cajita[i];
    printf("El resultado de ese arreglo es: %d\n", suma[i]);
    } 
    return 0;
}
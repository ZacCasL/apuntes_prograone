#include "arrelos.h"
int igualacion(int N, int caja[], int cajita[]){
    for(int i=0; i<N ; i++){
    cajita[i]=caja[i];
    printf("El valor en la segunda cajita es: %d\n", cajita[i]);
    } 
    return 0;
}

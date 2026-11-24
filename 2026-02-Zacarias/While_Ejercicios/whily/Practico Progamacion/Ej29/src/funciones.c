#include "funciones.h"
int mayor(int N, int caja[]){
    int may=caja[0];
    for(int i=0; i<N; i++){
        if(caja[i]>may){
            may=caja[i];
        }
    }
    return may;
}
int menor(int N, int caja[]){
    int men=caja[0];
    for(int i=0; i<N; i++){
        if(caja[i]<men){
            men=caja[i];
        }
    }
    return men;
}
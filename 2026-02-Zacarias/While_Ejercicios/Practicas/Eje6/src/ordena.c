#include "ordenador.h"
int mayor(int N, int caja[]){
   int mayor=caja[0];
    for(int i=1;i<N; i++){
        if(caja[i]>mayor){
            mayor=caja[i];
        }

    }
    return mayor;
}
int menor(int N, int caja[]){
   int menor=caja[0];
    for(int i=1;i<N; i++){
        if(caja[i]<menor){
            menor=caja[i];
        }

    }
    return menor;
}
#include "mayx.h"
int es_mayormenor(int N, int caja[], int M){
    for (int i=0; i<N;i++){
        if(caja[i]>M){
            printf("%d es mayor que %d\n", caja[i], M);
        } else if(caja[i]<M){
            printf("%d es menor que %d\n", caja[i],M);
        }else{
            printf("%d son iguales\n", caja[i]);
        }
    }
    return 0;
}



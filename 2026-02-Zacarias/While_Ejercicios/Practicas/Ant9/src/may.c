#include "par.h"
int es_par(int N, int caja[]){
    int i=0;
    while(i<N){
        if(caja[i]%2==0){
            printf("%d es par\n", caja[i]);
        }
        i++;
    }
    return 0;
}
int es_impar(int N, int caja[]){
    int i=0;
    while(i<N){
        if(caja[i]%2!=0){
            printf("%d es impar\n", caja[i]);
        }
        i++;
    }
    return 0;
}




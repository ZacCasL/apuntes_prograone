#include "sumpares.h"
int sumpares(int N, int caja[]){
int parsum=0;
    for (int i=0; i<N;i++){
        if(caja[i]%2==0){
            parsum+=caja[i];
        }
    }
    return parsum;
}
int sumimpar(int N, int caja[]){
    int imparsum=0;
    for (int i=0; i<N;i++){
        if(caja[i]%2!=0){
            imparsum+=caja[i];
        }
    }
    return imparsum;
}

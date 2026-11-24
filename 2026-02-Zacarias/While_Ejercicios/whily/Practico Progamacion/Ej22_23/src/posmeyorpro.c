#include "posmayorpro.h"
int sum(int N, int caja[]){
int sum=0;
    for (int i=0; i<N;i++){
        sum+=caja[i];
    }
    return sum;
}
int mayorpromedio(int N, int caja[], float promedio){
    int mayorq=0;
    for(int i=0; i<N ; i++){
        if(caja[i]>promedio){
            mayorq++;
            printf("Tenemos %d mayores al promedio y que estan en la posicion %d y es %d\n", mayorq, i+1, caja[i]);
        }
    } 
    
    return mayorq;
}
int menorpromedio(int N, int caja[], float promedio){
    int menorq=0;
    for(int i=0; i<N ; i++){
        if(caja[i]<promedio){
            menorq++;
            printf("Tenemos %d menores al promedio y que estan en la posicion %d y es %d\n", menorq, i+1, caja[i]);
        }
    } 
    
    return menorq;
}
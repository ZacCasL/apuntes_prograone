#include "mayprom.h"
int sum(int N, int caja[]){
int sum=0;
    for (int i=0; i<N;i++){
        sum+=caja[i];
    }
    return sum;
}
int mayorpromedio(int N, int caja[], float promedio){
    for(int i=0; i<N ; i++){
        if(caja[i]>promedio){
            printf("%d es mayor al promedio\n", caja[i]);
        }
    }
    return 0;
}

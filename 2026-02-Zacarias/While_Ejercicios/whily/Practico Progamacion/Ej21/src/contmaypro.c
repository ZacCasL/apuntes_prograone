#include "contmaypro.h"
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
            
        }
    } 
    printf("Tenemos %d mayores al promedio\n", mayorq);
    return mayorq;
}
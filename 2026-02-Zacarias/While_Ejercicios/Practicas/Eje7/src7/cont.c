#include "cont.h"
 
int conta(int N,int caja[]){
    int cont=0;
    for(int i=0;i<N;i++){
        if(caja[i]>0){
            cont++;
        }
    }
    return cont;
}
int cer(int N,int caja[]){
    int cer=0;
    for(int i=0;i<N;i++){
        if(caja[i]==0){
            cer++;
        }
    }
    return cer;
}
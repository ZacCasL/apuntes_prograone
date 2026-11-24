#include "funciones.h"
int sumadigim(int n){
    if(n == 0){
        return 0;
    }
    int ultdig = n % 10;
    int esImpar = (ultdig % 2 != 0)? ultdig:0;
    return esImpar + sumadigim(n/10);
}
int contarimpar(int n){
    if(n == 0){
        return 0;
    }
    int ultdig = n % 10;
    int esImpar = (ultdig % 2 != 0)? 1:0;
    return esImpar + contarimpar(n/10);
    }
int mostrar(int n,int p){
    if(n < 0){
     return 0;
    }
    printf("%d", n);
    mostrar(n-p,p);
}
int contmo(int n,int p){
    if(n < 0){
        return 0;
    }
    return 1 + contmo(n-p,p);
}
int summo(int n,int p){
    if(n < 0){
        return 0;
    }
    return n + summo(n-p,p);
}
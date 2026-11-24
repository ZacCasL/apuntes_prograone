#include "series.h"
int sumar_hasta(int n){
    int suma=0;
         for(int i=0;i<=n;i++){
        suma+=i; //suma+=suma+i
     }
     return suma;
}
int contar_pares(int n){
    int contador=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            contador++;//Suma 1 al contador por cada condicion
        }
    }
    return contador;
}
int contar_multiplos(int n,int divisor){
int cont_mult=0;
if(divisor != 0){
    for(int i=0;i<=n;i++){
        if(i % divisor==0){
            cont_mult++;
        }
    }
} else{
    cont_mult=0;
}
    return cont_mult;

}
int sumar_multiplos(int n,int divisor){
    int sum_mult=0;
    if(divisor != 0){
        for(int i=0;i<=n;i++){
            if(i % divisor==0){
                sum_mult+=i;
            }
        }
    } else{
        sum_mult=0;
    }
    return sum_mult;
}
#include "analizador.h"

int obtener_signo (int numero) {
    if (numero > 0){
        return 1;

    }else if (numero < 0){
        return -1;
    }else{ 
        return 0;
    }
}
int es_par(int numero){
    if (numero % 2 == 0){
        return 1;
    }else{
        return 0;
    
    }
}
int es_multiplo(int numero, int divisor){
    if (divisor != 0){
        if (numero % divisor == 0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
    }

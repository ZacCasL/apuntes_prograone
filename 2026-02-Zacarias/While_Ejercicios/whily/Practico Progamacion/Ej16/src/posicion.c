#include "posicion.h"
int buscaposi(int N, int caja[], int M){
    for (int i=0; i<N;i++){
        if(caja[i]==M){
            printf("Aqui tenemos 1 igual a %d en la posicion %d\n",M,i+1);
        }
    }
    return 0;
}
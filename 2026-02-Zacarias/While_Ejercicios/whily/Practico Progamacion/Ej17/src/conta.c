#include "contax.h"
int buscaposi(int N, int caja[], int M){
    int contador=0; 
    for (int i=0; i<N;i++){
        if(caja[i]==M){
            contador++;
            printf("Aqui tenemos %d iguales a %d en la posicion %d\n",contador,M,i+1);
        }
    }
    return 0;
}
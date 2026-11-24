#include "funciones.h"
int aprobados(int N, int caja[]){
    int aprobado = 0;
    for(int i=0; i<N ; i++){
    if(caja[i] >= 60){
      aprobado++;
    printf("Las notas de aprobacion son: %d\n", caja[i]);
    }
}
    return aprobado;
}
int desaprobados(int N, int caja[]){
    int desaprobado = 0;
    for(int i=0; i<N ; i++){
    if(caja[i] < 60){
      desaprobado++;
      printf("Las notas de desaprobacion son: %d\n", caja[i]);
    }
}
    return desaprobado;
}
int promedio(int N, int caja[]){
  float suma = 0.0;
  for (int i = 0; i < N; i++) {
      suma += caja[i];
  }
  float promedio = suma / N;
  return promedio;
}
int may(int N, int caja[]) {
    int mayor = caja[0];
    for (int i = 1; i < N; i++) {
        if (caja[i] > mayor) {
            mayor = caja[i];
        }
    }
    return mayor;
}
int men(int N, int caja[]) {
    int menor = caja[0];
    for (int i = 1; i < N; i++) {
        if (caja[i] < menor) {
            menor = caja[i];
        }
    }
    return menor;
}
int maypr(int N, int caja[], float promedio) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (caja[i] > promedio) {
            count++;
        }
    }
    return count;
}

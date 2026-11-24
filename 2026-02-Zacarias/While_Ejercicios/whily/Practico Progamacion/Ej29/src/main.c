#include <stdio.h>
int main(){
    int valor;
    printf("Agrega cuantos numeros quieres guardar:\n");
    scanf("%d",&valor);
    int cadena[valor];
    printf("Ingrese las notas\n");
for(int i=0; i<valor; i++){
    scanf("%d", &cadena[i]);
}
for(int i=0; i<valor; i++){
    printf("Las notas guardadas son: %d\n", cadena[i]);
}
int mayores = mayor(valor,cadena);
int menores = menor(valor,cadena);
printf("El mayor de la cadena es %d\n", mayores);
printf("El menor de la cadena es %d\n",menores);
int Diferencia = mayores - menores;
}
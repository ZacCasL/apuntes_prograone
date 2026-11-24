#include "funciones.h"
int main(){
    int val;
printf("Cuantas notas registraras?\n");
scanf("%d", &val);
int caja1[val];
printf("Ingrese las notas\n");
for(int i=0; i<val; i++){
    scanf("%d", &caja1[i]);
}
for(int i=0; i<val; i++){
    printf("Las notas guardadas son: %d\n", caja1[i]);
}
int aprobados_count = aprobados(val, caja1);
int desaprobados_count = desaprobados(val, caja1);
printf("Aprobados: %d\n", aprobados_count);
printf("Desaprobados: %d\n", desaprobados_count);
float promer = promedio(val, caja1);
printf("El promedio de las notas es: %.2f\n", promedio);
printf("La nota mayor es: %d\n", may(val, caja1));
printf("La nota menor es: %d\n", men(val, caja1));
printf("La cantidad de notas mayores al promedio es: %d\n", maypr(val, caja1, promer));
    return 0;
}
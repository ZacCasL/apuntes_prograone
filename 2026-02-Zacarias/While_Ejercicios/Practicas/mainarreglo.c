#include <stdio.h>

int main(void){
int N;
printf("Ingrese la cantidad de notas:");
scanf("%d", &N);
int notas[N];
int suma=0;
float promedio=0;
int aprobados=0;
for(int i=0;i<N;i++){
    scanf("%d", &notas[i]);   
}

for(int i=0;i<N;i++){
    printf("\nLa nota %d es: %d ", i+1, notas[i]);
    suma=suma+notas[i];
    if (notas[i]>=60){
        aprobados++;
}
    promedio=suma/N;

}printf("\nLa suma de las notas es: %d", suma);
printf("\nLa cantidad de aprobados es: %d", aprobados);
printf("\nEl promedio de las notas es: %.2f", promedio);
}
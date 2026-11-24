#include <stdio.h>
int main() {
    int codigo;
    int nota;
    FILE *ant = fopen("../datos/cod.txt", "a"); //el datos es un archivo y el cod es el nombre de el archivo que se creara
    if (ant == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    printf("Ingrese el codigo: ");
    scanf("%d", &codigo); 
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    fprintf(ant, "Codigo: %d, Nota: %d\n", codigo, nota);
    fclose(ant);
    ant =fopen("../datos/cod.txt", "r");
    if (ant == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    while(fscanf(ant, "Codigo: %d, Nota: %d\n", &codigo, &nota) == 2) {
        printf("Codigo: %d, Nota: %d\n", codigo, nota);
    }
    fclose(ant);
    return 0;
}
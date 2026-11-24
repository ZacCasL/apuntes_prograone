#include <stdio.h>

int main() {
    FILE *anth;
    int numero=22;
    int ant;
    anth = fopen("archivo.txt", "w");
    if (anth == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(anth, "numero: %d\n", numero);
    fclose(anth);
    
    anth = fopen("datos.txt", "r");
    if (anth == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fscanf(anth, "%d", &ant);
    fclose(anth);

    printf("Numero recuperado: %d\n", ant);
    return 0;
}

#include "funciones.h"

int main() {
    int opciones; 
    int usos;
    int codigo;
    for(;;){

    printf("================ MENU PRINCIPAL ===============\n");
    printf("1.Registrar uso\n");
    printf("2.Mostrar registros\n");
    printf("3.Genera reporte de impresion\n");
    printf("4.Salir\n");
    printf("Selecciona una opcion\n");
    scanf("%d",&opciones);
    if(opciones < 1 || opciones > 4){
        printf("Opcion invalida\n");
        return 0;
    }
    switch(opciones){
        case 1: {
            FILE *usos;
            usos = fopen("../datos/usos.csv", "a");
            if(usos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }   
        printf("Ingrese el codgio de la impresora \n");
        scanf("%d",&codigo);
            printf("%d",seguridad_codigo(codigo));
            if(seguridad_codigo(codigo)==0){
                return 0;
            }
            printf("Ingrese el uso de la impresora \n");
            scanf("%d",&usos);
            printf("%d",seguridad_uso(usos));
            if(seguridad_uso(usos)==0){
                return 0;
            }
            fprintf(usos, "Tiempo de uso:%d, Codigo:%d\n", usos, codigo);
            fclose(usos);
            printf("Uso registrado correctamente\n");
            break;
        }
        case 2: { 
            FILE *usos;
            usos = fopen("../datos/usos.csv", "r");
            if(usos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }
            while(fscanf(usos, "Tiempo de uso:%d, Codigo:%d\n", &usos, &codigo) == 2) {
            printf("Tiempo de uso: %d, Codigo: %d\n", usos, codigo);
            }
            fclose(usos);
            break;
        }
        case 3: {
            FILE *usos;
            usos = fopen("../datos/usos.csv", "r");
            if(usos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }
            
            break;
        }
        case 4: {
            printf("Saliendo del programa\n");
            return 0;
        }

    }
}
    return 0;
}
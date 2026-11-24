#include <stdio.h>
int main (void){
    int opciones; 
    int cant;
    for(;;){

    printf("================ MENU PRINCIPAL ===============\n");
    printf("1.Registrar un gasto\n");
    printf("2.Mostrar los gastos guardados\n");
    printf("3.Mostrar la cantidad y total de gastos\n");
    printf("4.Salir\n");
    printf("Selecciona una opcion\n");
    scanf("%d",&opciones);
    if(opciones < 1 || opciones > 4){
        printf("Opcion invalida\n");
        return 0;
    }
    switch(opciones){
        case 1: {
             FILE *gastos;
            gastos = fopen("datos/gastos.txt", "a");
            if(gastos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }
            printf("Ingrese el gasto\n");
            scanf("%d",&cant);
            fprintf(gastos, "Gasto: %d\n", cant);
            fclose(gastos);
            break;
        }
        case 2: {
            FILE *gastos;
            gastos = fopen("datos/gastos.txt", "r");
            if(gastos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }   
            fscanf(gastos, "Gastos : %d", &cant);
            fclose(gastos);
            break;
        }
        case 3:{
            FILE *gastos;
            int suma =0;
           gastos = fopen("datos/gastos.txt", "r");
            if(gastos == NULL){
                printf("Error al abrir el archivo\n");
                return 1;
            }
            while(fscanf(gastos, "Gasto: %d\n", &cant) == 1){
                suma += cant;
            }
            fclose(gastos);
            printf("Cantidad de gastos: %d\n", suma);           
            break;
        }
        case 4:{
            printf("Saliendo del programa\n");
            return 0;
        } 
    }
}
    return 0;
}
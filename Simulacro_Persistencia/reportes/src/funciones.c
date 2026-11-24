#include "funciones.h"
int seguridad_codigo(int valor){
       if (valor<0||valor>3){
        printf("El codigo es incorrecto");
        return 0;
       }
       printf("El codigo es valido");
    return 1;
}
int seguridad_uso(int valor){
       if (valor<0||valor>240){
        printf("El uso es incorrecto");
        return 0;
       }
       printf("El uso es valido");
    return 1;
}
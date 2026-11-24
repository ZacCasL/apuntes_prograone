#include "funciones.h"
int sumterpos(int a){
    int pos=0;
    for(int i=0;i<=a;i++){
        if(i % 2 == 0){
            pos+=i;
        }
    }
    return pos;
}
int sumtermen(int a){
    int nega=0;
    for(int i=0;i<=a;i++){
        if(i % 2 != 0){
            nega+=-i;
        }
    }
    return nega;
}
int masme(int a){
    for(int i=0;i<=a;i++){
        if(i % 2 != 0){
            printf("%d",i);
        }else if( i % 2 == 0){
            printf("%d",-i);
        }
    }
    return 0;
}
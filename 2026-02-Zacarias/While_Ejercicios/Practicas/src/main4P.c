#include <stdio.h>
int main() {
 float val;
    float sum=0;
printf("Ingrese la longitud de este\n");
scanf("%f", &val);
int caja[val];
for(int i=0; i<val; i++){
    scanf("%f", &caja[i]);
    sum=sum+caja[i];
}
printf("El promedio de lo que guardaste es:%.2f",sum/val);

}


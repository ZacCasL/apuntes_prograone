#include <stdio.h>
int main() {
    int val;
    int sum=0;
printf("Ingrese la longitud de este\n");
scanf("%d", &val);
int caja[val];
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);
    sum=sum+caja[i];
}
printf("La suma de todo lo que guardaste es:%d", sum);

    return 0;
}
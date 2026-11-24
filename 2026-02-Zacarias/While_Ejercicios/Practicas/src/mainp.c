#include <stdio.h>
int main() {
int val;
printf("Ingrese la longitud de este\n");
scanf("%d", &val);
int caja[val];
for(int i=0; i<val; i++){
    scanf("%d", &caja[i]);

}
for(int i=0;i<val;i++){
    printf("\nGuardaste %d", caja[i]);
}

   return 0;
}
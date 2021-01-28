#include <stdio.h>
// Ejercicio 7 - Invalid Address type 1

int main() {
    float *p;
    printf("El valor apuntado por p es: %f", *p);
    *p = 3.5;
    return 0;
}
  
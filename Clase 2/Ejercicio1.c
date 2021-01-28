#include <stdio.h>
// Referenciación: es la obtencion de direccion de memoria de una variable.

int main() {
    int dir_var = 15;
    printf("El número de la variable es %p:", &dir_var);
    return 0;
}
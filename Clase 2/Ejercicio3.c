#include <stdio.h>
// Ejercicio 3 - ejemplo de asignacion de direcciones

int main() {
    int i = 15;
    int *p, *q;
    p = &i; // Se le asigna a 'p' la dirección de 'i'
    q = p; // Se le asigna a 'q' la direccion almacenada en la variable 'p'
    printf("La direccion de memoria de p sería: %p\n", p);
    printf("La direccion de memoria de q sería: %p", q);
    return 0;
}
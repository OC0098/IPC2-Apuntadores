#include <stdio.h>
// Ejercicio 10 - Apuntadores constantes y apuntadores a constantes.
// Apuntadores constantes: no permite la modificion de la direccion almacenada en el apuntador, pero si permite la modificiación del valor al que apunta.

int main(){
    int x = 5, y = 7;
    int *const p = &x; // Declaracion e inicialización del apuntador constante
    *p = 3;
    p = &y;
    return 0;
}
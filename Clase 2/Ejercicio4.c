#include <stdio.h>
// Ejercicio 4 - Desferenciacion de variable. No es más que obtener el valor almacenado en el espacio de memoria donde apunta un apuntador

int main() {
    int mi_var = 21;
    int y;
    int *apuntador;
    apuntador = &mi_var;
    printf("El valor de mi variable 'mi_var' es: %d\n", *apuntador);
    y = *apuntador + 10;
    printf("El valor de la variable 'y' es: %d", y);
    return 0;
}
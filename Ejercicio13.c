#include <stdio.h>
// Ejercicio #13
int main(){
    int lista[5]={10,20,30,40,50};
    int *p;

    p=&lista[3]; // 'p' almacena la direccion de la posicion 3 del arreglo
    p = lista + 3; // Instruccion equivalente a la anterior
    printf("%d\n", lista[2]); // Imprime 30
    printf("%d\n", *(lista+2)); // Instrucción equivalente a la anterior
    return 0;
}
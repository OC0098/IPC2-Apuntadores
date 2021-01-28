#include <stdio.h>
// Ejercicio 9 - Pointer to Pointer. Dado que es una variable que apunta a otra, fácilmente se puede deducir que puede existir apuntadores a apuntadores.

int main(){
    char c = 'z';
    printf("Valor 'c' es:%c\n", c);
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    ***pppc = 'm'; // cambia el valor de c a 'm'
    printf("Valor 'c' es:%c", c);
    return 0;
}
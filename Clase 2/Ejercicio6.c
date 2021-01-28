#include <stdio.h>
// Ejercicio 6

int main() {
    int *p1:
    float *p2;
    int x;
    p1 = &x; // Esto es válido
    p2 = &x; // Esto no es válido - ya que el p2 es una variable de tipo float y el p1 es de tipo entero.
    return 0;
}
  
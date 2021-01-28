#include <stdio.h>
// Ejercicio 5 - Desreferenciacion con una perspectiva distinta y usando estructura

int main() {
    struct Articulo{
        char nombre[20];
        char descripcion[100];
        float precio;
    };
    
    struct Articulo art;
    struct Articulo *ptr_art = &art;
    
    (*ptr_art).precio = 50.38;
    ptr_art->precio = 50.38;
    
    // El %f cambia dependiendo del tipo de dato que nosotros queramos mostrar
    printf("Precio: %f", ptr_art->precio);
    
    return 0;
}
  
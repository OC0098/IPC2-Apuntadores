#include <stdio.h>
// Ejercicio 8 - Invalid Address type 2
int *p, y;
void func(){
    int x = 40;
    p = &x;
    y = *p; // OK
    *p = 23; // OK
}
int main(){
    func();
    y = *p; // NOT VALID
    *p = 25; // NOT VALID
    return 0;
}
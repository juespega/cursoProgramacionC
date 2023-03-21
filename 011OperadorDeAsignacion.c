//Operador de Asignación en C
#include <stdio.h>

int main(){

    int a, b, c, f;
    a = b = c = 20;

    printf("El valor de las variables a, b y c son = %i %i %i\n", a, b, c);

    f = 10;
    f += 1;
    f -= 3;
    f *= 2;
    f /= 4;


    printf("El valor de la variable f es = %i\n", f);

}
//Tipos de Datos
#include <stdio.h>
#include <stdbool.h> //permite utilizar el tipo de datos bool

int main(){

    int a = 1; //2 bytes rango desde 32768 -32767
    char b = 'z'; // 1 byte rango desde 0 --> 255
    float c = 3.1415;
    //bool 
    double d = 1.5555555555555;
    long e = 12345;
    short v = 2; //2 bytes rango desde -128 -> 127
    unsigned int f = 123; //2 bytes rango desde 0 --> 65535


    printf("el valor del entero es de %i\n", a);
    printf("el valor del char es de %c\n", b);
    printf("el valor del flotante es de %f\n", c);
    printf("el valor del double es de %lf\n", d);
    printf("el valor del short es de %i\n", v);
    printf("el valor del long es de %li\n", e);
    printf("el valor del entero insigned es de %li\n", f);


    return 0;
}
//Directivas de preprocesador y varibales
#include <stdio.h> //Libreria Standard input/output
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Las macros sirven para definir cosas antes de que empiece tu programa
#define PI 3.1415926535897932384626433832

int y = 5; //variable global, se puede usar en n funciones

int main(){

    int x = 10; //variable local, solo se puede utilizar en esta función.
    float suma = 0;
    
    suma = PI + x;

    //%i => hace referencia a un entero.
    //%f => hace referencia a un float.
    printf("La suma es: %.2f\n", suma); //float con dos decimales

    return 0;
}
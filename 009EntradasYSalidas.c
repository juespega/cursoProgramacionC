//Entradas y Salidas en C
#include <stdio.h>

int main(){


    int q;
    float w;
    char e;
    char f[40];
    int gets();

    // printf("Digita el valor de la variable a (int) \n");
    // scanf("%i", &q);

    // printf("El valor que digitaste fue: %i \n",q);

    // printf("Digita el valor de la variable b (float) \n");
    // scanf("%f", &w);

    // printf("El valor que digitaste fue: %.3f \n",w);

    // printf("Digita el valor de la variable c (char) \n");
    // scanf("%c", &e);

    // printf("El valor que digitaste fue: %c \n",e);

    printf("Digita tu nombre: \n");
    // scanf("%s", &f); scanf solo guarda hasta que encuentra un espacio en blanco.
    gets(f);

    printf("El valor que digitaste fue: %s \n",f);

    return 0;
}
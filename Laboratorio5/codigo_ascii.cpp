#include <stdio.h>
// Variables Globales
int caracter;
char l;

// Funcion principal
int main (){
    printf("Hola, ingrese un caracter.\n");
    scanf("%i",&caracter);
    l = caracter;
    printf("Su codigo ascii es %i",l);

    return 0;
}   
#include <stdio.h>
// Variables Globales
int valor;
char caracter;

// Funcion principal
int main (){
    printf("Hola, ingrese un caracter.\n");
    scanf("%c",&caracter);
    valor = caracter;
    printf("Su codigo ascii es %i",valor);

    return 0;
}   
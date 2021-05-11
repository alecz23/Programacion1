#include <stdio.h>
// Variables Globales
int primernumero;
int segundonumero;
int suma;
// Funcion principal
int main (){
    printf("Hola, ingrese un numero.\n");
    scanf("%i",&primernumero);
    printf("Ingrese otro numero\n");
    scanf("%i",&segundonumero);
    suma = primernumero + segundonumero;
    printf("Aqui esta la suma entre %i + %i = %i\n",primernumero,segundonumero,suma);

    return 0;
}   
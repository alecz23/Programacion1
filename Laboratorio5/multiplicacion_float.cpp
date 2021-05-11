#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;



int main (){
    printf("Hola, ingrese un numero.\n");
    scanf("%f",&numero1);
    printf("Ingrese otro numero\n");
    scanf("%f",&numero2);
    multiplicacion = numero1 * numero2;
    printf("La multiplicacion es %f",multiplicacion);

    return 0;

}
#include <stdio.h>

int numero1;
int numero2;
int resultado;

int main (){
    printf("Ingrese los dos numeros de forma X, Y para multiplicar.\n");
    scanf("%d, %d", &numero1, &numero2);
    for (int i = 0; i < numero1 ; i++){
        resultado += numero2;
    }
    printf("%d * %d = %d\n",numero1, numero2, resultado);
    return 0;
}
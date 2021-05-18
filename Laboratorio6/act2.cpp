#include <stdio.h>

int num1;
int num2;
int num3;

int main (){
    printf("Ingrese un numero.\n");
    scanf("%i",&num1);
    printf("Ingrese otro numero.\n");
    scanf("%i",&num2);
    printf("Ingrese otro numero.\n");
    scanf("%i",&num3);

    if (num1>>num2 && num1>>num3)  {
        printf("El numero mayor es el %i.\n" , num1);
    }
    else if (num2>>num1 && num2>>num3) {
        printf("El numero mayor es el %i.\n", num2);
    }
    else if (num3>>num1 && num3>>num2)   {
       printf("El numero mayor es el %i.\n", num3);
    }
    else if (num1==num2 && num1==num3) {
       printf("Todos los numeros son iguales.\n");
    }
    return  0;
}
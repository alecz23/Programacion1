#include <stdio.h>

int num;

int main(){
    printf("Ingrese un numero.\n");
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("Es par.\n");
     }
    else 
        printf("Es impar.\n"); 

    return 0;
}
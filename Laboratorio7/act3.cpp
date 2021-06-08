#include <stdio.h>

int numero;
int i;

int main (){
    do{
        printf("Introduce un numero.\n");
        scanf("%i", &numero);
    }
    while (numero<=0);   {
        for (i=1; i <=numero/2; i++) {
           if (numero % i == 0)   {
               printf("%d", i);
           }
        }
    }
    printf("%d", numero);
    return 0;
}
#include <stdio.h>

int numero;

int main (){
     printf( "Todos los numeros pares entre en 1 y el 100\n " );

    for ( numero = 2 ; numero <= 100 ; numero += 2 )
    {
        printf( "%d ", numero );
    }
    getch(); 
    return 0;
}
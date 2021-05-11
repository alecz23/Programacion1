#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float prueba2;
float ponderacion1; //tarea1
float ponderacion2; //tarea2
float ponderacion3;//tarea3
float ponderacion4;//actitudinal
float ponderacion5;//prueba1



int main (){
     printf("A continuacion para calcular la nota que necesita en la prueba 2\n");
    printf("Ingrese la nota de la Tarea 1.\n");
    scanf("%f",&tarea1);
    printf("Ingrese la nota de la Tarea 2.\n");
    scanf("%f",&tarea2);
    printf("Ingrese la nota de la Tarea 3.\n");
    scanf("%f",&tarea3);
    printf("Ingrese la nota de la nota actitudinal.\n");
    scanf("%f",&actitudinal);
    printf("Ingrese la nota de la Prueba 1.\n");
    scanf("%f",&prueba1);
   
    ponderacion1 = 0.1 * tarea1;  
    ponderacion2 = 0.1 * tarea2;
    ponderacion3 = 0.1 * tarea3;
    ponderacion4 = 0.1 * actitudinal;
    ponderacion5 = 0.25 * prueba1;

    prueba2= (39.5 - (ponderacion1 + ponderacion2 + ponderacion3 + ponderacion4 + ponderacion5))/0.35;

        
    printf("La nota minima que debe obtener para aprobar el curso es: %f ",prueba2);

    return 0;
}
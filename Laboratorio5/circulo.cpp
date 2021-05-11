#include <stdio.h>

float PI = 3.14159265;
float radio;
float perimetro;
float area;



int main (){
    printf("Hola, ingrese el radio del circulo.\n");
    scanf("%f",&radio);
        perimetro = 2 * PI * radio;
        area = PI * radio * radio;
    printf("El perimetro corresponde a %f y el area a %f",perimetro, area);

    return 0;

}
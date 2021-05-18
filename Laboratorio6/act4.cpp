#include <stdio.h>
int puntos;//acumulados hasta antes de la compra
int costo;//costo total de la compra
int puntosendinero;//conversion de los puntos a dinero
int si = 1; 
int codigo;
int puntosac; //puntos acumulados despues de la compra

int main(){
   printf("Bienvenido al supermercado.\n");
   printf("Ingrese el costo de su compra.\n");
    scanf("%i", &costo);
   printf("Ingrese sus puntos acumulados\n");
    scanf("%i", &puntos);
    printf("Ingrese el codigo de su producto\n");
    scanf("%i", &codigo);
    puntosendinero = puntos *10;

    if (puntosendinero - costo >= 0)
    {
        printf("Desea pagar con puntos? Presione 1, de lo contrario presione 2\n");
        scanf("%i", &si);
        if (si)
        {
           printf("Muchas gracias por su compra.\n");
           return 0;
        }
        else
            printf("Debe pagar en efectivo:%i\n", costo);
            if (costo >= 10000)
            {
                if (codigo>=100 && codigo<200)
                {
                    puntosac = costo/50;
                    printf("Usted acumula %i puntos\n", puntosac);
                }
                else
                puntosac = costo/30;
                printf("Usted acumula %i puntos\n", puntosac);
                return 0;
                
            }
            else //costo < 1000
               if (codigo>=100 && codigo<200)
                {
                    puntosac = costo/100;
                    printf("Usted acumula %i puntos\n", puntosac);
                }
                else
                puntosac = costo/50;
                printf("Usted acumula %i puntos\n", puntosac);
                return 0;
    } 
    else
    printf("Debe pagar en efectivo:%i\n", costo);
            if (costo >= 10000)
            {
                if (codigo>=100 && codigo<200)
                {
                    puntosac = costo/50;
                    printf("Usted acumula %i puntos", puntosac);
                }
                else
                puntos = costo/30;
                printf("Usted acumula %i puntos", puntosac);
                
            }
            else //costo < 1000
               if (codigo>=100 && codigo<200)
                {
                    puntosac = costo/100;
                    printf("Usted acumula %i puntos", puntosac);
                }
                else
                puntosac = costo/50;
                printf("Usted acumula %i puntos", puntosac);
                
        return 0;
          }
    

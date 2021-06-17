#include <stdio.h>

int resultado;
int num;

int main(){ 
while(num>=0){
 printf("ingrese un número\n \n");
 scanf("%d", &num);
 resultado=resultado+num;
 }

 printf("El resultado es: %d\n \n",resultado);
       
    return 0;
}
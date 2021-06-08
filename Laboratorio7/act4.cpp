#include <stdio.h>

int numero;
int divisores=0;
int valor;

int main(){ 
    printf("Digite un numero para encontrar los numeros primos entre 0 y su numero:\n");
    scanf("%d",&numero);

  for(int k = 1; k < numero; k++){
    valor=k;
    for(int i = 1; i <= valor; i++){
        if(valor%i==0){ 
        divisores=divisores+1;
        }
        }
        if(divisores==2){
      printf("%d\n", valor);}
      divisores=0;
    }
	return 0;
}
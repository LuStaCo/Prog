#include <stdio.h>

int main() {
  int inteiro;
  float flutuante;
  float resultado; 
  float soma;  

  printf("Numero inteiro: ");
  scanf("%i", &inteiro);

  printf("Numero flutuante: ");
  scanf("%f", &flutuante);

  resultado = (float) inteiro / flutuante;
  printf("Resultado da divisão: %.2f\n", resultado); // Output: 3.333333


  soma = (float) inteiro + flutuante;
  printf("Resultado da soma: %.2f\n", soma);

  return 0;
}
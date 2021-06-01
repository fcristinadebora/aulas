#include <stdio.h>

int main()
{
  /* ESTRUTURAS DE REPETIÇÃO
   * São utilizadas para substituir tarefas repetitivas.
   * Exemplo: imprimir números de 1 até 10
   */

  //SEM estruturas de repetição:
  printf("\nNúmeros de 1 a 10 SEM estruturas de repetição:\n");
  printf("1.. ");
  printf("2.. ");
  printf("3.. ");
  printf("4.. ");

  printf("\n\n"); //Imprime duas linhas em branco

  //COM estrutura de repetição
  int contador; //Variável de controle/contador

  //Estrutura de repetição WHILE
  printf("Números de 1 a 10 usando WHILE:\n");
  contador = 1;
  while (contador <= 10) {
    printf("%d.. ", contador);
    contador++;
  }

  printf("\n\n"); //Imprime duas linhas em branco

  //Estrutura de repetição FOR
  printf("Números de 1 a 10 usando FOR:\n");
  for(contador = 1; contador <= 10; contador++) {
    printf("%d.. ", contador);
  }

  printf("\n\n"); //Imprime duas linhas em branco
}
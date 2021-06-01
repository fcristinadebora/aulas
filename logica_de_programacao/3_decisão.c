int main()
{
  /* ESTRUTURAS DE DECISÃO
   * Ou ESTRUTURAS CONDICIONAIS
   * servem para dizer ao computador, através do código,
   * o que ele deve fazer em um dado cenário.
   */
  int resultado;
  int valor1;
  int valor2;
  int operacao;

  valor1 = 2;
  valor2 = 3;
  
  /* 1 = SOMA
   * 2 = SUBTRAÇÃO
   * 3 = MULTIPLICAÇÃO
   */
  operacao = 1;
  
  //Principal Estrutura de decisão: IF .. ELSE
  if (operacao == 1) {
    resultado = valor1 + valor2;
    printf("SOMA: %d + %d = %d \n", valor1, valor2, resultado);
  } else if (operacao == 2) {
    resultado = valor1 - valor2;
    printf("SUBTRAÇÃO: %d - %d = %d \n", valor1, valor2, resultado);
  } else if (operacao == 3) {
    resultado = valor1 * valor2;
    printf("MULTIPLICAÇÃO: %d * %d = %d \n", valor1, valor2, resultado);
  } else {
    printf("OPERAÇÃO INVÁLIDA\n");
  }

  return 0;
}
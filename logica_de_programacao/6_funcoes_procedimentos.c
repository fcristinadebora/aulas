/* FUNÇÕES e PROCEDIMENTOS
  * São um agrupamento de procedimentos que podem ser chamados em vários lugares,
  * evitando duplicidade de código e facilitando manutenção
  * funções e procedimentos podem chamar outras funções e procedimentos
  * 
  * Em sua essência, funções e procedimentos são a mesma coisa
  * Com a exceção de que FUNÇÕES RETORNAM VALORES e PROCEDIMENTOS NÃO RETORNAM
*/

//Declaração da função soma
int funcao_soma(parcela1, parcela2) {
  return parcela1 + parcela2;
}

//Declaração da FUNÇÃO QUADRADO, observe a diferença para o PROCEDIMENTO_QUADRADO
int funcao_quadrado(numero) {
  return numero * numero;
}

//Declaração do procedimento para calcular o número ao quadrado e imprimir seu resultado
void procedimento_quadrado(numero) {
  int quadrado;
  quadrado = numero * numero;

  printf("%d ao quadrado é = %d \n", numero, quadrado);
}

int main()
{
  int resultado, parcela1, parcela2;

  parcela1 = 3;
  parcela2 = 4;
  resultado = funcao_soma(parcela1,parcela2); //CHAMADA DA FUNÇÃO_SOMA

  printf("%d + %d = %d \n", parcela1, parcela2, resultado);

  parcela1 = 6;
  parcela2 = 5;
  resultado = funcao_soma(parcela1,parcela2); //CHAMADA DA FUNÇÃO_soma
  printf("%d + %d = %d \n", parcela1, parcela2, resultado);

  //CHAMADA DO PROCEDIMENTO QUADRADO
  procedimento_quadrado(5);  

  //CHAMADA DA FUNÇÃO QUADRADO
  int numero = 6;
  resultado = funcao_quadrado(numero);
  printf("%d ao quadrado é = %d \n", numero, resultado);

  return 0;
}
int main()
{
  /* Variáveis e constantes armazenam dados/valores de um
   * determinado TIPO. como texto, inteiro, real...
   * o TIPO de dado serve para informar o computador como ele
   * deve tratar aquele dado.
   */
  char produto_nome[] = "Notebook Dell"; //Variável tipo TEXTO
  int  produto_quantidade = 15; //variável tipo INTEIRO
  float produto_valor = 4500.99; //Variável tipo PONTO FLUTUANTE (real)

  printf("Produto: %s \n", produto_nome);
  printf("Quantidade: %d \n", produto_quantidade);
  printf("Valor: %.2f \n", produto_valor);

  return 0;
}
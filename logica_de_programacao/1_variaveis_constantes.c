int main()
{
  /* VARIÁVEIS
   * são elementos da programação
   * usados para armazenar os valores que vamos precisar em nosso algoritmo
   */
  int soma;
  int parcela1;
  int parcela2;

  parcela1 = 3;
  parcela2 = 4;

  soma = parcela1 + parcela2;

  printf("1 - %d + %d = %d \n", parcela1, parcela2, soma);

  /* CONSTANTES
   * são como variáveis, porém, só podem receber valor 1 vez.
   * ou seja, seu valor ao longo do código é CONSTANTE, por isso o nome
   */
  const int parcela3 = 5;
  soma = parcela1 + parcela2 + parcela3;
  printf("2 -%d + %d + %d = %d \n", parcela1, parcela2, parcela3, soma);

  return 0;
}
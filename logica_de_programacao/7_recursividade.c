/* RECURSIVIDADE
 * Como já vimos, funções podem chamar outras funções
 * Podem inclusive chamr a si mesmas, a esse procedimento de uma
 * função chamar a si mesma, damos o nome de RECURSIVIDADE
*/

//Declaração da função fatorial
int funcao_calcula_fatorial(int numero) {
  int fatorial;
  
  //Caso base: fatorial de n <= 1 retorna 1
  if ( numero <= 1 ) {
    printf(" * 1");
    return 1;
  }
  
  //Chamada recursiva
  printf(" * %d", numero);
  fatorial = numero * funcao_calcula_fatorial(numero - 1);
  return (fatorial);
}

int main()
{
  const int numero_fatorar = 3;

  //Cálculo de fatorial SEM função recursiva
  int fatorial = 1;
  int numero = numero_fatorar;
  printf("SEM FUNÇÃO FATORIAL %d! = %d", numero, fatorial);  
  for(fatorial; numero > 1; numero = numero - 1)
  {
    printf(" * %d", numero);  
    fatorial = fatorial * numero;
  }
  printf(" = %d\n", fatorial);  


  //Cálculo de fatorial COM função recursiva
  printf("FUNÇÃO FATORIAL %d! =", numero_fatorar);  
  int fatorial2 = funcao_calcula_fatorial(numero_fatorar);
  printf(" = %d\n", fatorial2);

  return 0;
}
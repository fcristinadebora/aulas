int main()
{
  /* VETORES
   * São utilizados para agrupar informações parecidas
   * evitando criar variáveis repetitivas
   */
  
  //Armazenando as notas de uma disciplina usando variáveis
  float nota_1 = 8.5;
  float nota_2 = 9.0;
  float nota_3 = 6.7;
  float nota_4 = 7.3;

  printf("Notas nas atividades da disciplina de Programação:\n");
  printf("Nota 1: %.2f \n", nota_1);
  printf("Nota 2: %.2f \n", nota_2);
  printf("Nota 3: %.2f \n", nota_3);
  printf("Nota 4: %.2f \n", nota_4);

  //Armazenando as notas de uma disciplina usando vetores
  float notas[] = {
    8.5,
    9.0,
    6.7,
    7.3
  };

  printf("Notas nas atividades da disciplina de Programação:\n");
  printf("Nota 1: %.2f \n", notas[0]);
  printf("Nota 2: %.2f \n", notas[1]);
  printf("Nota 3: %.2f \n", notas[2]);
  printf("Nota 4: %.2f \n", notas[3]);

  //Outra possibilidade de uso de vetor
  int gols_por_partida[10];
  gols_por_partida[0] = 1;
  gols_por_partida[1] = 2;
  gols_por_partida[2] = 1;
  gols_por_partida[3] = 0;
  gols_por_partida[4] = 4;
  gols_por_partida[5] = 2;

  printf("Gols por partida:\n");
  printf("Partida 1: %d \n", gols_por_partida[0]);
  printf("Partida 2: %d \n", gols_por_partida[1]);
  printf("Partida 3: %d \n", gols_por_partida[2]);
  printf("Partida 4: %d \n", gols_por_partida[3]);
  printf("Partida 5: %d \n", gols_por_partida[4]);
  printf("Partida 6: %d \n", gols_por_partida[5]);
}
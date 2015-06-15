/* Programa que pede nota do aluno entre 1 a 5 e exibe uma mensagem de acordo corresponde: Caso 1: SUSPENSO, Caso 2: Mais ou Menos, Caso 3: APROVADO, Caso 4: REGULAR, Caso 5 : Excelente, default: FORA DE ALCANCE */

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int clacificacao;
printf(" QUALIFICACAO DE UM ALUN0 \n\n" );
printf(" Inserir qualificacao do aluno entre 1-5: \t" , clacificacao);
scanf("%d",& clacificacao);

  switch (clacificacao)
 {
  case 1: printf("Suspenso\n\n");
  break;
    case 2 : printf("Mais Ou Menos\n\n");
    break;
  case 3: printf("Aprovado\n\n");
  break;
    case 4: printf("Regular\n\n");
    break;
  case 5: printf("Excelente\n\n");
  break;
    default: 
	printf("Invalido!!!\n\n");
 }
system ("pause");
return 0;
}

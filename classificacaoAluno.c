/* Programa que pede nota do aluno entre 1 a 5 e exibe uma mensagem de acordo corresponde: Caso 1: SUSPENSO, Caso 2: Mais ou Menos, Caso 3: APROVADO, Caso 4: REGULAR, Caso 5 : Excelente, default: FORA DE ALCANCE */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    int classificacao; //Declarando variáveis
    
    //Definindo a nacionalidade
    setlocale(LC_ALL,"Portuguese");
    
    //Menu
    printf(" \n           QUALIFICAÇÃO DE UM ALUNO           \n\n" );
    
    // 
    printf(" \n\n Inserir qualificação do aluno entre 1-5: \t" , classificacao);
    scanf("%d",& classificacao);

    //Estrutura de decisão de múltipla escolha
    switch (classificacao)
    {
       case 1: printf("\n Suspenso \n\n\n\n");
       break;
       
       case 2 : printf("\n Mais Ou Menos \n\n\n\n");
       break;
       
       case 3: printf("\n Aprovado \n\n\n\n");
       break;
       
       case 4: printf("\n Regular\n\n\n\n");
       break;
       
       case 5: printf("\n Excelente \n\n\n\n");
       break;
       
       default: 
       printf("\n FORA DE ALCANCE!!! \n\n\n\n");
    }
    
    // 
    system ("pause");
    
    return 0;
}
